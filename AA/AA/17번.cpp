//17. ������ ����
#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>

int main()
{
	//freopen("input.txt", "rt", stdin);
	int std_num;	//�л� ��
	int std_card;	//�л��� ���� ī��
	int std_res;	//�л��� ���� ��
	int res;		//��¥ ��

	scanf("%d", &std_num);

	for (int i = 0; i < std_num; i++)
	{
		res = 0;	//res �ʱ�ȭ!
		scanf("%d %d", &std_card, &std_res);

		for (int j = 0; j <= std_card; j++)
		{
			res += j;
		}

		//�л��� ���� ��� ��¥ ���� ��
		if (std_res == res) printf("YES\n");
		else printf("NO\n");
	}
}