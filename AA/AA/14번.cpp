//14. 뒤집은 소수
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "AA.h"

int reverse(int x)  //뒤집는 함수
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

bool isPrime(int x)  //소수인지 확인하는 함수
{
	if (x == 1) return false;		//1(소수 x) 예외처리

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

	for (int i = 0; i < num; i++)  //입력과 동시에 숫자 뒤집기
	{
		scanf("%d", &input[i]);
		input[i] = reverse(input[i]);
	}

	for (int i = 0; i < num; i++)
	{
		if (isPrime(input[i]) == true)  //만약에 소수라면 바로 출력
		{
			printf("%d ", input[i]);
		}
	}

	return 0;
}