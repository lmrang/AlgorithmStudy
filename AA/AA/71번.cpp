//70. 송아지 찾기 (BFS : 상태트리탐색)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
queue<int> q;
vector<int> a[10001];
int visit[10001];


void BFS(int s, int e)
{
	int len = 0;
	int ex[3] = { 1, -1 , 5 };
	q.push(s);
	visit[s] = 1;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		for (int i = 0; i < 3; i++)
		{
			int a = x + ex[i];
			if (a <= 0 || a > 10000) continue;
			if (a == e)
			{
				printf("%d", visit[x]);
				return;
			}
			if (visit[a] == 0)
			{
				visit[a] = visit[x] + 1;
				q.push(a);
			}
		}
	}
}

int main()
{
	int s, e;
	scanf("%d %d", &s, &e);
	BFS(s, e);

	return 0;
}