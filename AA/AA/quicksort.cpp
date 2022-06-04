#include <stdio.h>

int number = 10; //�迭�� �� ����
int data[] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };

void quickSort(int* data, int start, int end)
{
	if (start >= end)
	{//���Ұ� 1���� ���! �״�� �α�
		return;
	}

	int key = start;	//Ű�� ù��° ����
	int i = start + 1;	//������ ��� ����
	int j = end;		//���� ��� ����
	int temp;
	
	while (i <= j)
	{//������������ �ݺ�
		while (i <= end && data[i] <= data[key])
		{//Ű������ ū ���� ���� �� ���� �̵�
			i++;
		}
		while (j > start && data[j] >= data[key])
		{//Ű������ ���� ���� ���� �� ���� �̵�
			j--;
		}
		if (i > j)	//���� ������ ���¸� Ű ���� ��ü
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

	//���� �ٽ� ����� (����Լ�)
	quickSort(data, start, j - 1);	//����
	quickSort(data, j + 1, end);	//������
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