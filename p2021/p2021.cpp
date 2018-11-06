/*
 * p2021.cpp
 *
 *  Created on: 2018年10月11日
 *      Author: zhaohankai
 */
#include<cstdio>
using namespace std;
int main() {
	int n;
	while (scanf("%d", &n) && n != 0) {
		int num = 0;
		for (int i = 0; i < n; i++) {
			int t;
			scanf("%d", &t);
			num += t / 100;
			t = t % 100;
			num += t / 50;
			t = t % 50;
			num += t / 10;
			t = t % 10;
			num += t / 5;
			t = t % 5;
			num += t / 2;
			t = t % 2;
			num += t;
		}
		printf("%d\n", num);
	}
	return 0;
}



