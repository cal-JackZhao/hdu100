/*
 * p2010.cpp
 *
 *  Created on: 2018年10月9日
 *      Author: zhaohankai
 */
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int m, n;
	while (scanf("%d%d", &m, &n) !=EOF) {
		int count = 0;
		int a[1000];
		for (int i = m; i <= n; i++) {
			int t = i, sum = 0;
			while (t > 0) {
				sum += pow(t % 10, 3);
				t = t / 10;
			}
			if (sum == i) {
				a[count] = i;
				count++;
			}
		}
		if (count == 0) {
			printf("no\n");
		} else {
			for (int i = 0; i < count - 1; i++) {
				printf("%d ", a[i]);
			}
			printf("%d\n", a[count - 1]);
		}
	}
	return 0;
}



