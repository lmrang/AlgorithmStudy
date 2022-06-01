//16. Anagram
#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>

int main()
{
	//freopen("input.txt", "rt", stdin);
	char A[101];	//첫번째 입력
	char B[101];	//두번째 입력
	int cnt[60] = { 0 };
	//A 65 a 97

	scanf("%s", &A);
	getchar();		//버퍼 비우기
	scanf("%s", &B);

	for (int i = 0; i < strlen(A); i++)
	{
		cnt[A[i] - 65]++;
		cnt[B[i] - 65]--;
	}

	for (int i = 0; i < 60; i++)
	{
		if (cnt[i] != 0)
		{
			printf("NO\n");
			exit(0);	//algorithm에 있음.
		}
	}
	printf("YES");

	return 0;
	
}

/*
int a[60], b[60];  //전역

	int main()
	{
		char str[100];
		int i;
		scanf("%s", &str);
		for (i = 0; str[i] != '\0'; i++)
		{
			if(str[i]>=65 && str[i]<=90) {
				a[str[i]-64]++;
			}
			else a[str[i]-70]++;
		}

		scanf("%s", &str);
		for(i=0;str[i]!='\0';i++
		{
			if(str[i]>=65 && str[i]<=90)
			{
				b[str[i]-64]++;
			}
		else b[str[i]-70]++;
		}

		for(i=1;i<=52;i++)
		{
			if(a[i] != b[i])
			{
				printf("NO\n");
				exit(0);
			}
		}
		printf("YES\n");
		return 0;
	}
*/