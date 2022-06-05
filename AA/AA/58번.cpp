//58. 이진트리 깊이우선탐색(DFS)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> input[8];
int visit[8];
queue<int> q;

void dfs(int x)
{
	if (visit[x]) return;
	visit[x] = true;
	cout << x << ' ';	//전위순회출력

	for (int i = 0; i < input[x].size(); i++)
	{
		int y = input[x][i];
		dfs(y);
	}
	//cout << x << ' ';	//후위순회출력
}

int main() 
{
	input[1].push_back(2);
	input[2].push_back(1);

	input[1].push_back(3);
	input[3].push_back(1);

	input[2].push_back(4);
	input[4].push_back(2);

	input[2].push_back(5);
	input[5].push_back(2);

	input[3].push_back(6);
	input[6].push_back(3);

	input[3].push_back(7);
	input[7].push_back(3);

	dfs(1);
	return 0;
}