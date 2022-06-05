//58. 부분집합(DFS)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

int n;			//입력값
int ch[11];		//체크

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