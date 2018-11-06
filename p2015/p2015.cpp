/*
 * p2015.cpp
 *
 *  Created on: 2018年10月10日
 *      Author: zhaohankai
 */

#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF) {
		int t = ((2 + 2 * m) / 2);
		if (m == 0) continue;
		int k = n % m == 0 ? n / m - 1 : n / m;
		for (int i = 1; i <= k; i++) {
			printf("%d ", t);
			t += 2 * m;
		}
		if (n % m == 0) {
			printf("%d\n", t);
		} else printf("%d\n", ((4*n - 2*(n % m - 1)) * (n % m) / 2) / (n % m));
	}
	return 0;
}



