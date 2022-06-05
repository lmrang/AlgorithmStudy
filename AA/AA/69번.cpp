//69. 이진트리 넓이우선탐색(BFS)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	//freopen("input.txt", "rt", stdin);
	vector<int> input[8];	//노드, 간선
	queue<int> q;			//queue
	int visit[8];			//방문노드 확인
	int a, b;				//노드

	for (int i = 0; i < 7; i++)	//노드 7개!
	{//노드, 간선 입력
		cin >> a >> b;
		//무방향 간선
		input[a].push_back(b);
		input[b].push_back(a);
	}

	q.push(1);
	visit[1] = true;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		cout << x << " ";

		for (int i = 0; i < input[x].size(); i++)
		{
			int y = input[x][i];
			if (visit[y] != true)
			{
				q.push(y);
				visit[y] = true;
			}
		}
	}

	return 0;
}