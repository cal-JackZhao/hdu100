/*
 * p2013.cpp
 *
 *  Created on: 2018年10月9日
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int num = 1;
		for (int i = 1; i <= n - 1; i++)
			num = (num + 1) * 2;
		printf("%d\n", num);
	}
	return 0;
}



