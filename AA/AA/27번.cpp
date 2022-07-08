#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <vector>

int main()
{
	int a;
	int num[1001] = { 0 };
	int num2[1001] = { 0 };
	int ans[1001] = { 0 };
	int j = 0;
	scanf("%d", &a);

	for (int i = 1; i <= a; i++)
	{//약수 구하기
		for (int j = i; j <= a; j += i)
		{
			num[j]++;
		}
	}

	for (int i = 2; i <= a; i++)
	{
		if (num[i] == 2)
		{//소수만
			ans[j]++;
			j++;
		}
		else
		{

		}
	}

	return 0;
}