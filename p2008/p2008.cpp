/*
 * p2008.cpp
 *
 *  Created on: 2018年10月8日
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int n;
	while (scanf("%d", &n) && n != 0) {
		int negative = 0, zero = 0, positive = 0;
		double t;
		for (int i = 1; i <= n; i++) {
			scanf("%lf", &t);
			if (t < 0) negative++;
			else if (t == 0) zero++;
			else positive++;
		}
		printf("%d %d %d\n", negative, zero, positive);
	}
	return 0;
}



