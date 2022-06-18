//23. 연속부분 증가수열
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
	vector<int> num;
	int n, input;
	int max = 0;
	int cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &input);
		num.push_back(input);
	}

	for (int i = 0; i < n-1; i++)
	{
		if (num[i] <= num[i + 1]) cnt++;
		else cnt = 0;

		if (max < cnt) max = cnt;
	}

	printf("%d\n", max+1);
	return 0;
}