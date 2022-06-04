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
	//	do {	//최초 힙 구성
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
	{	//가장 큰 수는 맨 아래로 그리고 크기 줄이기
		temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;

		h(heap, i);
		//int root = 0;
		//int c = 1;
		//do {
		//	c = 2 * root + 1;
		//	//자식 중에 더 큰 값을 찾기
		//	if (c < i - 1 && heap[c] < heap[c + 1])
		//	{
		//		c++;
		//	}

		//	//루트보다 자식이 크다면 교환
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