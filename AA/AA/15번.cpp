//15. �Ҽ��� ����
#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
#include<stdio.h>
#include "AA.h"

int main()
{
	//freopen("input.txt", "rt", stdin);
	int num, i, j, flag;
	int cnt = 0;

	scanf("%d", &num);

	for (i = 2; i <= num; i++)
	{
		flag = 1;
		for (j = 2; j * j <= i; j++) //i�� �����ٱ����� ������ �� �� �ִ�.
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1) cnt++;
	}

	printf("%d", cnt);

	return 0;
}


/*for (i = 2; i <= num; i++)
	{
		flag = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1) cnt++;
	}*/  //1�� �ȿ� �ȵ�.....