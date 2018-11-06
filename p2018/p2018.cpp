/*
 * p2018.cpp
 *
 *  Created on: 2018年10月10日
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int a[100];
	int n;
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	a[4] = 4;
	for (int i = 5; i <= 55; i++)
		a[i] = a[i-2] + a[i-3] + a[i-4];
	while (scanf("%d", &n) && n != 0) {
		printf("%d\n", a[n]);
	}
	return 0;
}



