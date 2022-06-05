//69. ����Ʈ�� ���̿켱Ž��(BFS)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	//freopen("input.txt", "rt", stdin);
	vector<int> input[8];	//���, ����
	queue<int> q;			//queue
	int visit[8];			//�湮��� Ȯ��
	int a, b;				//���

	for (int i = 0; i < 7; i++)	//��� 7��!
	{//���, ���� �Է�
		cin >> a >> b;
		//������ ����
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