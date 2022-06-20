//25. 석차 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include<vector>
int grade[101];
int num[101];

void quick(int* grade, int start, int end)
{//내림차순 정렬
	if (start >= end) return;

	int key = start;
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j)
	{
		while (i <= end && grade[i] >= grade[key]) i++;
		while (j > start && grade[j] <= grade[key]) j--;
		if (i > j)
		{
			temp = grade[key];
			grade[key] = grade[j];
			grade[j] = temp;
		}
		else
		{
			temp = grade[i];
			grade[i] = grade[j];
			grade[j] = temp;
		}
	}

	quick(grade, start, j - 1);
	quick(grade, j + 1, end);
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &num[i]);
		grade[i] = num[i];
	}

	quick(grade, 1, n);		//퀵 내림차순 정렬

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (grade[i-1] == grade[i]) continue;	//동점자 판단
			if (grade[i] == num[j])
			{
				num[j] = i;
			}
		}
	}

	for (int i = 1; i <= n; i++) printf("%d ", num[i]);

	return 0;
}