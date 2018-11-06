/*
 * p2009.cpp
 *
 *  Created on: 2018年10月8日
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF) {
		double sum = 0;
		double t = n;
		for (int i = 1; i <= m; i++) {
			sum += t;
			t = sqrt(t);
		}
		printf("%.2lf\n", sum);
	}
	return 0;
}



