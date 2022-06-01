//17. 가위바위보
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//freopen("input.txt", "rt", stdin);
	int play;
	int A[100];
	int B[100];

	scanf("%d", &play);
	for (int i = 0; i < play; i++)
	{//A가 낸 정보 입력
		scanf("%d", &A[i]);
	}

	for (int i = 0; i < play; i++)
	{//B가 낸 정보 입력
		scanf("%d", &B[i]);
	}

	for (int i = 0; i < play; i++)
	{
		if (A[i] == 1)
		{
			switch (B[i])
			{
			case 1:
				printf("D\n");
				break;
			case 2:
				printf("B\n");
				break;
			default:
				printf("A\n");
				break;
			}
		}

		else if (A[i] == 2)
		{
			switch (B[i])
			{
			case 1:
				printf("A\n");
				break;
			case 2:
				printf("D\n");
				break;
			default:
				printf("B\n");
				break;
			}
		}

		else if (A[i] == 3)
		{
			switch (B[i])
			{
			case 1:
				printf("B\n");
				break;
			case 2:
				printf("A\n");
				break;
			default:
				printf("D\n");
				break;
			}
		}
	}

	return 0;
}