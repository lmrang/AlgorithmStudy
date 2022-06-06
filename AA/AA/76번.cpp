//76. 이항계수(메모이제이션)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
int dy[21][21];

int DFS(int n, int r)
{
	if (dy[n][r] != 0) return dy[n][r];	//DP
	if (n == r || r == 0) return 1;
	else {
		return dy[n][r] = DFS(n - 1, r - 1) + DFS(n - 1, r);
	}
}

int main()
{
	int n, r;
	scanf("%d %d", &n, &r);

	printf("%d\n", DFS(n, r));
	return 0;
}