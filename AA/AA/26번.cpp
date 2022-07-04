//26. 마라톤
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	//freopen("input.txt", "rt", stdin);
	int i, j, n, cnt = 0;

	scanf("%d", &n);
	vector<int> a(n + 1);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}

	printf("1 ");						//1등의 최고 기록은 1등 (고정)

	//1등 이후 등수 계산
	for (i = 2; i <= n; i++) {
		cnt = 0;
		for (j = i - 1; j >= 1; j--) {
			if (a[j] >= a[i]) cnt++;	//앞(j)의 사람과 비교(큰 숫자가 있다면 그만큼 등수가 밀려남 cnt++)
		}
		printf("%d ", cnt + 1);
	}
	return 0;
}

/*
n의 최대 입력 가능 숫자가 10,000개
만약 많아진다면 1초 이내 실행 불가능 
많아 진다면 병합정렬을 사용하면 시간 단축 가능
*/