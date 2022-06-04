#include <stdio.h>

int number = 10; //배열의 총 갯수
int data[] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };

void quickSort(int* data, int start, int end)
{
	if (start >= end)
	{//원소가 1개인 경우! 그대로 두기
		return;
	}

	int key = start;	//키는 첫번째 원소
	int i = start + 1;	//오른쪽 출발 지점
	int j = end;		//왼쪽 출발 지점
	int temp;
	
	while (i <= j)
	{//엇갈릴때까지 반복
		while (i <= end && data[i] <= data[key])
		{//키값보다 큰 값을 만날 때 까지 이동
			i++;
		}
		while (j > start && data[j] >= data[key])
		{//키값보다 작은 값을 만날 때 까지 이동
			j--;
		}
		if (i > j)	//현재 엇갈린 상태면 키 값과 교체
		{
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}

	//각각 다시 재수행 (재귀함수)
	quickSort(data, start, j - 1);	//왼쪽
	quickSort(data, j + 1, end);	//오른쪽
}


int main()
{
	quickSort(data, 0, number - 1);
	
	int i;
	for (int i = 0; i < number; i++)
	{
		printf("%d ", data[i]);
	}
}