//19. 분노유발자
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//freopen("input.txt", "rt", stdin);
	int N;
	int len[100];
	int cnt = 0;
	int max = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &len[i]);
		max = len[i];
	}
	
	for (int i = N - 2; i >= 0; i--)
	{
		if (max < len[i])
		{
			max = len[i];
			cnt++;
		}
	}
	printf("%d\n", cnt);

	return 0;
}