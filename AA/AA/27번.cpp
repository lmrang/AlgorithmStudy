//27��. N!�� ǥ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a;
	scanf("%d", &a);
	vector<int> ch(a + 1);

	for (int i = 2; i <= a; i++)
	{
		int temp = i;
		int j = 2;
		while (1)
		{
			if (temp % j == 0)
			{//������ ��������
				temp = temp / j;
				ch[j]++;
			}
			else j++; //������ �������� ������
			if (temp == 1) break;
		}
	}

	printf("%d! = ", a);
	for (int i = 2; i <= a; i++)
	{
		if (ch[i] != 0) printf("%d ", ch[i]);
	}

	return 0;
}

/*
*���μ� ���� ����*
������ �μ��� üũ�迭�� �߰��Ѵ�

���μ� ����
2�� ����� ���� �� �¾� �������� ������ 2->3���� ����
�� �¾� �������� ���� ��Ű�� �ʰ� �״�� ��� ������.
2->3->4(4�� 2�� ���������� �����̱⿡ 4�� ������ ������ ���ڴ� ����)
*/