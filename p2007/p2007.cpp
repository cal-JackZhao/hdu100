/*
 * p2007.cpp
 *
 *  Created on: 2018年10月8日
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
	int x, y, sumodd, sumeven;
	while (scanf("%d%d", &x, &y) != EOF) {
		sumodd = 0;
		sumeven = 0;
		if (x > y) {
			int temp = x;
			x = y;
			y = temp;
		}
		for (int i = x; i <= y; i++) {
			if (i % 2 == 0) sumeven += pow(i, 2);
			else sumodd += pow(i, 3);
		}
		printf("%d %d\n", sumeven, sumodd);
	}
	return 0;
}



