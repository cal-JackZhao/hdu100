/*
 * p2022.cpp
 *
 *  Created on: 2018年10月11日
 *      Author: zhaohankai
 */
#include<cstdio>
#include<cmath>
#include<limits>
#include<iostream>
using namespace std;
int main() {
	int m, n;
	int posi, posj, maxabs, maxv;
	while (scanf("%d%d", &m, &n) != EOF) {
		maxabs = INT_MIN;
		for (int i = 1; i <= m; i++)
			for (int j = 1; j <= n; j++) {
				int t;
				scanf("%d", &t);
				if (abs(t) > maxabs) {
					maxabs = abs(t);
					maxv = t;
					posi = i;
					posj = j;
				}
		}
		printf("%d %d %d\n",posi, posj, maxv);
	}
	return 0;
}



