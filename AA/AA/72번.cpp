//70. 공주구하기 (큐 자료구조로 해결)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;

int main() 
{
	queue<int> king_in;
	int king;
	int num;

	scanf("%d %d", &king, &num);

	for (int i = 1; i <= king; i++)
	{
		king_in.push(i);
	}

	for (int i = 1; i <= num; i++)
	{
		int a = king_in.front();
		king_in.pop();

		if (i == num)
		{
			i = 0;
			//printf("%d", a);
		}
		else {
			king_in.push(a);
		}

		if (king_in.size() == 1)
		{
			printf("%d\n", king_in.front());
			break;
		}
	}
	return 0;
}