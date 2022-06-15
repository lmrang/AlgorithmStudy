//21. 카드게임
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>

int main()
{
    int card_A[10];
    int card_B[10];
    char result[10];
    int res_A = 0;
    int res_B = 0;
    for (int i = 0; i < 10; i++) scanf("%d", &card_A[i]);
    for (int i = 0; i < 10; i++) scanf("%d", &card_B[i]);

    for (int i = 0; i < 10; i++)
    {
        if (card_A[i] > card_B[i])
        {
            result[i] = 'A';
            res_A += 3;
        }
        else if (card_A[i] < card_B[i]) {
            result[i] = 'B';
            res_B += 3;
        }
        else {
            result[i] = 'D';
            res_A += 1;
            res_B += 1;
        }
    }

    printf("%d %d\n", res_A, res_B);

    if (res_A > res_B) printf("A");
    else if (res_B > res_A) printf("B");
    else
    {
        for (int i = 9; i >= 0; i--)
        {
            if (i == 0)
            {
                printf("D");
                break;
            }
            else if (result[i] == 'A')
            {
                printf("A");
                break;
            }
            else if (result[i] == 'B')
            {
                printf("B");
                break;
            }
        }
    }

    return 0;
}