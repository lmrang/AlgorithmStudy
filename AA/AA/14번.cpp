//14. ������ �Ҽ�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "AA.h"

int reverse(int x)  //������ �Լ�
{
	int a = 0;
	while (x > 10)
	{
		a += x % 10;
		a *= 10;
		x = x / 10;
	}
	a += x;
	return a;
}

bool isPrime(int x)  //�Ҽ����� Ȯ���ϴ� �Լ�
{
	if (x == 1) return false;		//1(�Ҽ� x) ����ó��

	for (int i = 2; i < x; i++)
	{
		if (x % i == 0) return false;
	}
	return true;
}

int main() {
	int num;
	int input[100];
	//freopen("input.txt", "rt", stdin);
	scanf("%d", &num);

	for (int i = 0; i < num; i++)  //�Է°� ���ÿ� ���� ������
	{
		scanf("%d", &input[i]);
		input[i] = reverse(input[i]);
	}

	for (int i = 0; i < num; i++)
	{
		if (isPrime(input[i]) == true)  //���࿡ �Ҽ���� �ٷ� ���
		{
			printf("%d ", input[i]);
		}
	}

	return 0;
}