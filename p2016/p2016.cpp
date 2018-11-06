/*
 * p2016.cpp
 *
 *  Created on: 2018年10月10日
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<limits>
using namespace std;
int main() {
	int n;
	while (scanf("%d", &n) && n != 0) {
		int a[101];
		int minvalue = INT_MAX ,t = 1;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
			if (a[i] < minvalue) {
				minvalue = a[i];
				t = i;
			}
		}
		int temp = a[1];
		a[1] = a[t];
		a[t] = temp;
		for (int i = 1; i <= n - 1; i++) {
			printf("%d ", a[i]);
		}
		printf("%d\n", a[n]);
	}
	return 0;
}



