/*
 * p2011.cpp
 *
 *  Created on: 2018年10月9日
 *      Author: zhaohankai
 */
#include<cstdio>
#include<iostream>
using namespace std;
int main() {
	int m, t = 1, f = 1;
	double a[1001];
	memset(a, 0, sizeof(a));
	scanf("%d", &m);
	for (int i = 1; i <= 1000; i++) {
		a[i] = a[i - 1] + (double)f / i;
		f = -f;
	}
	for (int i = 0; i < m; i++) {
		int n;
		scanf("%d", &n);
		printf("%.2lf\n", a[n]);
	}
	return 0;
}



