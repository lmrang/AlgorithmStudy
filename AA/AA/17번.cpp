//17. 선생님 퀴즈
#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>

int main()
{
	//freopen("input.txt", "rt", stdin);
	int std_num;	//학생 수
	int std_card;	//학생이 뽑은 카드
	int std_res;	//학생이 말한 답
	int res;		//진짜 답

	scanf("%d", &std_num);

	for (int i = 0; i < std_num; i++)
	{
		res = 0;	//res 초기화!
		scanf("%d %d", &std_card, &std_res);

		for (int j = 0; j <= std_card; j++)
		{
			res += j;
		}

		//학생이 말한 답과 진짜 답을 비교
		if (std_res == res) printf("YES\n");
		else printf("NO\n");
	}
}