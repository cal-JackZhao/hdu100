/*
 * p2012.cpp
 *
 *  Created on: 2018年10月9日
 *      Author: zhaohankai
 */
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(int x) {
	if (x == 0 || x == 1) return false;
	for (int i = 2; i < sqrt(x); i++)
		if (x % i == 0) return false;
	return true;
}

int main() {
	int x, y;
	scanf("%d%d", &x, &y);
	while (x != 0 || y != 0) {
		bool f = true;
		for (int i = x; i <= y; i++) {
			int t = i * i + i + 41;
			if (!is_prime(t)) {
				f = false;
				break;
			}
		}
		if (f) printf("OK\n");
		else printf("Sorry\n");
		scanf("%d%d", &x, &y);
	}
	return 0;
}



