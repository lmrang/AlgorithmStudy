//22. �µ��� �ִ밪(1��)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include<vector>

int main()
{
	int n, k, i, max;
	int sum = 0;

	scanf("%d %d", &n, &k);
	std::vector<int> a(n);	//�������� ������ �Ҵ�
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	for (int i = 0; i < k; i++)
	{//������ �µ��� ��
		sum += a[i];
	}
	//max�� ������ ���� �Է�
	max = sum;

	for (int i = k; i < n; i++)
	{//���� ��ĭ�� �����ϸ鼭 �������� ��� ((-)�� (+)��)
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