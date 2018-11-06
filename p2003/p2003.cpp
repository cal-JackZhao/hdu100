/*
 * p2003.cpp
 *
 *  Created on: 2018年10月7日
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	double n;
	while (scanf("%lf", &n) != EOF) {
		if (n > 0) {
			printf("%.2lf\n", n);
		}
		else printf("%.2lf\n", -n);
	}
	return 0;
}



