//60. ���� ���� �κ�����(DFS)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

int num;
int input[11];
int total = 0;
bool flag = false;

void DFS(int x, int sum)
{
	if (sum > (total / 2)) return;	//������ ������ �Ѿ�� �� �̻� Ȯ���� �ʿ� x
	if (flag == true) return;		//�̹� ���� �߰� �����Ƿ� return;
	if (x == num + 1) 
	{
		if (sum == (total - sum)) 
		{
			flag = true;
		}
	}
	else
	{
		DFS(x + 1, sum + input[x]);
		DFS(x + 1, sum);
	}
}

int main()
{
	//freopen("input.txt", "rt", stdin);
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		scanf("%d", &input[i]);
		total += input[i];
	}
	DFS(1, 0);

	if (flag) printf("YES\n");
	else printf("NO\n");

	return 0;
}