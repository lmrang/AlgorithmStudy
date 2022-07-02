//25. 석차 구하기 (브루투포스)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
int grade[101];
int num[101];

int main()
{
	int n;
	freopen("input.txt", "rt", stdin);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &num[i]);
		grade[i] = 1;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (num[j] > num[i]) grade[i]++;
		}
	}

	for (int i = 1; i <= n; i++) printf("%d ", grade[i]);

	return 0;
}

//정렬 사용 X
//void quick(int* grade, int start, int end)
//{//내림차순 정렬
//	if (start >= end) return;
//
//	int key = start;
//	int i = start + 1;
//	int j = end;
//	int temp;
//
//	while (i <= j)
//	{
//		while (i <= end && grade[i] >= grade[key]) i++;
//		while (j > start && grade[j] <= grade[key]) j--;
//		if (i > j)
//		{
//			temp = grade[key];
//			grade[key] = grade[j];
//			grade[j] = temp;
//		}
//		else
//		{
//			temp = grade[i];
//			grade[i] = grade[j];
//			grade[j] = temp;
//		}
//	}
//
//	quick(grade, start, j - 1);
//	quick(grade, j + 1, end);
//}