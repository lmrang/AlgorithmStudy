//22. 온도의 최대값(1초)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include<vector>

int main()
{
	int n, k, i, max;
	int sum = 0;

	scanf("%d %d", &n, &k);
	std::vector<int> a(n);	//동적으로 사이즈 할당
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	for (int i = 0; i < k; i++)
	{//최초의 온도의 합
		sum += a[i];
	}
	//max에 최초의 값을 입력
	max = sum;

	for (int i = k; i < n; i++)
	{//이후 한칸씩 전진하면서 동적으로 계산 ((-)앞 (+)뒤)
		sum = sum + (a[i] - a[i - k]);
		if (max < sum) max = sum;
	}

	printf("%d\n", max);

	return 0;
}


//int main()  -- Time Limit
//{
//    int n, k, max = -29700000;
//    int temp[100000];
//    int res[100000] = { 0 };
//    scanf("%d %d", &n, &k);
//    for (int i = 0; i < n; i++) scanf("%d", &temp[i]);
//
//    for (int i = 0; i <= n - k; i++)
//    {
//        for (int j = 0; j < k; j++)
//        {
//            res[i] += temp[i + j];
//        }
//        //printf("%d  ", res[i]);
//        if (max < res[i]) max = res[i];
//    }
//    printf("%d\n", max);
//
//    return 0;
//}