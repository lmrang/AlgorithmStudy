//27번. N!의 표현법
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
			{//나누어 떨어지면
				temp = temp / j;
				ch[j]++;
			}
			else j++; //나누어 떨어지지 않으면
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
*소인수 분해 응용*
나오는 인수를 체크배열에 추가한다

소인수 분해
2로 나누어서 몫이 딱 맞아 떨어지지 않으면 2->3으로 증가
딱 맞아 떨어지면 증가 시키지 않고 그대로 계속 나눈다.
2->3->4(4는 2로 나누어지는 숫자이기에 4로 나누어 떨어질 숫자는 없다)
*/