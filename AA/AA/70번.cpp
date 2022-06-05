//70. 그래프 최단거리(BFS)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	//freopen("input.txt", "rt", stdin);
	int visit[20];
	int N, M; //N:노드의 수. M:간선의 수
	queue<int> q;
	vector<int> input[20];
	int len[20] = { 0 };

	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++)
	{//간선 수 만큼 입력
		int a, b;
		scanf("%d %d", &a, &b);
		input[a].push_back(b);
	}

	q.push(1);
	visit[1] = true;
	len[1] = 0;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		for (int i = 0; i < input[x].size(); i++)
		{
			int y = input[x][i];
			if (visit[y] != true)
			{
				q.push(y);
				visit[y] = true;
				len[y] = len[x] + 1;
			}
		}
	}

	for (int i = 2; i <= N; i++)
	{
		printf("%d : %d\n", i, len[i]);
	}

	return 0;
}