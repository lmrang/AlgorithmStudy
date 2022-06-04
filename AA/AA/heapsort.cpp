#include <stdio.h>

int number = 9;
int heap[] = { 11, 6, 5, 10, 3, 5, 9, 1, 6 };

void h(int* data, int number)
{
	for (int i = 1; i < number; i++)
	{
		int c = i;
		do {
			int root = (c - 1) / 2;
			if (data[root] < data[c])
			{
				int temp = data[root];
				data[root] = data[c];
				data[c] = temp;
			}
			c = root;
		} while (c != 0);
	}
}

int main()
{
	int temp;

	h(heap, number);
	//for (int i = 1; i < number; i++)
	//{
	//	int c = i;
	//	do {	//���� �� ����
	//		int root = (c - 1) / 2;
	//		if (heap[root] < heap[c])
	//		{
	//			temp = heap[root];
	//			heap[root] = heap[c];
	//			heap[c] = temp;
	//		}
	//		c = root;
	//	} while (c != 0);
	//}

	for (int i = number - 1; i >= 0; i--)
	{	//���� ū ���� �� �Ʒ��� �׸��� ũ�� ���̱�
		temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;

		h(heap, i);
		//int root = 0;
		//int c = 1;
		//do {
		//	c = 2 * root + 1;
		//	//�ڽ� �߿� �� ū ���� ã��
		//	if (c < i - 1 && heap[c] < heap[c + 1])
		//	{
		//		c++;
		//	}

		//	//��Ʈ���� �ڽ��� ũ�ٸ� ��ȯ
		//	if (c < i && heap[root] < heap[c])
		//	{
		//		temp = heap[root];
		//		heap[root] = heap[c];
		//		heap[c] = temp;
		//	}
		//	root = c;
		//} while (c < i);
	}

	for (int i = 0; i < number; i++)
	{
		printf("%d ", heap[i]);
	}
}