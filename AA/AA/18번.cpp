//18. Ãþ°£¼ÒÀ½
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//freopen("input.txt", "rt", stdin);
	int N, M, M_input;
	int max = 0;
	int cnt = 0;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &M_input);

		if (M_input > M) cnt++;
		else cnt = 0;

		if (max < cnt)
		{
			max = cnt;
		}
	}
	if (max == 0) printf("-1\n");
	else printf("%d\n", max);

	return 0;
}