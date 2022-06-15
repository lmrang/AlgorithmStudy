//22. 온도의 최대값   -- 시간제한;;
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>

int main()
{
    int n, k, max = -29700000;
    int temp[100000];
    int res[100000] = { 0 };
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) scanf("%d", &temp[i]);

    for (int i = 0; i <= n - k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            res[i] += temp[i + j];
        }
        //printf("%d  ", res[i]);
        if (max < res[i]) max = res[i];
    }
    printf("%d\n", max);

    return 0;
}