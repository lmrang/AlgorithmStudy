//73. �ּ���(STL priority_queue)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;

int main()
{
	int a;

	priority_queue<int> pQ;
	while (true)
	{
		scanf("%d", &a);
		if (a == -1) break;
		if (a == 0)
		{
			if (pQ.empty()) printf("-1\n");
			else
			{
				printf("%d\n", -pQ.top());
				pQ.pop();
			}
		}
		else pQ.push(-a);
	}
}
// �ִ������� ��ȣ�� �ٲ㼭 �Է��ϸ� �ּ����� �ȴ�
//5 -> -5�� �Է��ϰ� ����� �ٽ� -5 -> 5