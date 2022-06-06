//77. 친구인가? (Union & Find 자료구조)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int unf[1001];

int Find(int a)
{
	if (a == unf[a]) return a;
	else return unf[a] = Find(unf[a]);
}

void Union(int a, int b)
{
	a = Find(a);
	b = Find(b);
	if (a != b) unf[a] = b;
}

int main()
{	
	//freopen("input.txt", "rt", stdin);
	int N, M;
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++)
	{
		unf[i] = i;
	}

	for (int i = 0; i < M; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		Union(a, b);
	}

	int a, b;
	scanf("%d %d", &a, &b);
	a = Find(a);
	b = Find(b);

	if (a != b) printf("NO\n");
	else printf("YES\n");

	return 0;
}