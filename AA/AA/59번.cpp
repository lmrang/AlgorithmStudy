//58. �κ�����(DFS)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

int n;			//�Է°�
int ch[11];		//üũ

void D(int L)
{
	if (L == n + 1)
	{
		int i;
		for (i = 1; i <= n; i++)
		{
			if (ch[i] == 1) cout << i << ' ';
		}
		cout << endl;
	}
	else
	{
		ch[L] = 1;
		D(L + 1);
		ch[L] = 0;
		D(L + 1);
	}
}


int main()
{
	cin >> n;
	D(1);
	return 0;
}