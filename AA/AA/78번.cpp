//78.원더랜드(Kruskal MST 알고리즘 : Union & Find 활용)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
using namespace std;
int unf[26];
int money[26][26];

struct Edge
{
	int v1;
	int v2;
	int val;
	Edge(int a, int b, int c)
	{
		v1 = a;
		v2 = b;
		val = c;
	}
	bool operator< (Edge& b)
	{
		return val < b.val;
	}
};

int Find(int a)
{
	if (a == unf[a]) return a;
	else return unf[a] = Find(unf[a]);
}

void Union(int a, int b)
{
	a = Find(a);
	b = Find(b);
	if (a != b)
	{
		unf[a] = b;
	}
}

int main()
{
	//freopen("input.txt", "rt", stdin);
	vector<Edge> Ed;
	int V;	//도시의 개수
	int E;	//도로의 개수
	int A, B, cost;
	int res = 0;

	scanf("%d %d", &V, &E);

	for (int i = 1; i <= V; i++)
	{
		unf[i] = i;
	}

	for (int i = 0; i < E; i++)
	{
		scanf("%d %d %d", &A, &B, &cost);
		Ed.push_back(Edge(A, B, cost));
	}

	sort(Ed.begin(), Ed.end());		//비용 오름차순 정렬
	/*for (int i = 0; i < E; i++)
	{
		printf("%d %d %d\n", Ed[i].v1, Ed[i].v2, Ed[i].val);
	}*/

	for (int i = 0; i < E; i++)
	{
		int fa = Find(Ed[i].v1);
		int fb = Find(Ed[i].v2);
		if (fa != fb)
		{
			res += Ed[i].val;
			Union(Ed[i].v1, Ed[i].v2);
		}
	}
	printf("%d\n", res);

	return 0;
}