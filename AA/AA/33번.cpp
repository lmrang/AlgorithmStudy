//33. 3등의 성적은?
//힙정렬 사용함...
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

void sort(int* data, int num)
{
	int temp;
	for (int i = 1; i < num; i++)
	{
		int c = i;
		do
		{
			int root = (c - 1) / 2;
			if (data[root] > data[c])
			{
				temp = data[root];
				data[root] = data[c];
				data[c] = temp;
			}
			c = root;
		} while (c != 0);
	}
}

int main() 
{
	//freopen("input.txt", "rt", stdin);
	int num;
	int input[101];
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &input[i]);
	}
	sort(input, num);

	for (int i = num - 1; i >= 0; i--)
	{
		int temp;
		temp = input[0];
		input[0] = input[i];
		input[i] = temp;
		
		sort(input, i);
	}

	int temp = input[0];
	int chk = 1;
	for (int i = 1; i < num; i++)
	{
		if (temp != input[i]) {
			temp = input[i];
			chk++;
		}
		if (chk == 3) {
			printf("%d\n", input[i]);
			break;
		}
	}
	
	return 0;
}