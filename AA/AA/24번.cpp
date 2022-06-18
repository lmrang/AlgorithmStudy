//24. Jolly Jumpers
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include<vector>

using namespace std;
vector<int> num;
int ch[101];
int main()
{
	int n, input, an;
	//freopen("input.txt", "rt", stdin);
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &input);
		num.push_back(input);
	}
	
	for (int i = 0; i < n - 1; i++)
	{
		if (num[i] <= num[i + 1]) an = num[i + 1] - num[i];
		else an = num[i] - num[i + 1];

		if (an > n) {	//두 수의 차가 n-1 보다 크면 그 순간 종료, 답이 될 수가 없음.
			printf("NO\n");
			exit(0);
		}
		ch[an]++;
	}
	
	for (int i = 1; i < n; i++)
	{
		if (ch[i] == 0)
		{
			printf("NO\n");
			exit(0);
		}
	}

	printf("YES\n");
	return 0;
}