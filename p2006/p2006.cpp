/*
 * p2006.cpp
 *
 *  Created on: 2018年10月8日
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n, t, product;
	while (scanf("%d", &n) != EOF) {
		product = 1;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &t);
			product = t % 2 == 1 ? product * t : product;
		}
		printf("%d\n", product);
	}
	return 0;
}



