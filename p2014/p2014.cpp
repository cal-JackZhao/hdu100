/*
 * p2014.cpp
 *
 *  Created on: 2018年10月9日
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<algorithm>

bool comp(double x, double y) {
	return x > y;
}

using namespace std;
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		double a[100];
		for (int i = 0; i < n; i++)
			scanf("%lf", &a[i]);
		sort(a, a+n, comp);
		double sum = 0;
		for (int i = 1; i < n - 1; i++)
			sum += a[i];
		printf("%.2lf\n", (double)sum / (n - 2));
	}
	return 0;
}



