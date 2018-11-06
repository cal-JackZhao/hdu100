/*
 * p2020.cpp
 *
 *  Created on: 2018年10月11日
 *      Author: zhaohankai
 */
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;

bool cmp(int x, int y) {
	return abs(x) > abs(y);
}

int main() {
	int n;
	int a[101];
	while (scanf("%d", &n) && n != 0) {
		for (int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		sort(a, a+n, cmp);
		for (int i = 0; i < n - 1; i++)
			printf("%d ", a[i]);
		printf("%d\n", a[n - 1]);
	}
	return 0;
}



