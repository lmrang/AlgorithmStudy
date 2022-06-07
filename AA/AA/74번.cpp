//73. 최소힙(STL priority_queue)
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
// 최대힙에서 부호만 바꿔서 입력하면 최소힙이 된다
//5 -> -5를 입력하고 출력은 다시 -5 -> 5