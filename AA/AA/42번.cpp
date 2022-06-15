//42번. 이분검색
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

void sort(int* data, int start, int end)
{
	int key = start;
	int i = key + 1;
	int j = end;
	int temp;

	if (start >= end) return;

	while (i < j)
	{
		while (data[key] > data[i] && i < end) i++;
		while (data[key]<data[j] && j>start) j--;

		if (i < j)
		{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
		else
		{
			temp = data[key];
			data[key] = data[j];
			data[j] = temp;
		}
		sort(data, 0, j - 1);
		sort(data, j + 1, end);
	}
}

int Find(int* data, int start, int end, int a)
{
	int i = (start + end) / 2;

	if (start > end) return -1;
	if (data[i] == a) return i;
	else if (data[i] > a) return Find(data, 0, i - 1, a);
	else return Find(data, i + 1, end, a);
}

int main()
{
	int a, b;
	int input[101];
	freopen("input.txt", "rt", stdin);
	scanf("%d %d", &a, &b);

	for (int i = 0; i < a; i++)
	{
		scanf("%d", &input[i]);
	}

	sort(input, 0, a-1);

	int num = Find(input, 0, a - 1, b);
	printf("%d", num + 1);
	return 0;
}