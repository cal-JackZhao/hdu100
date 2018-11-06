/*
 * p2004.cpp
 *
 *  Created on: 2018年10月7日
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (90 <= n && n<=100) printf("A\n");
		else if (80 <= n && n<=89) printf("B\n");
		else if (70 <= n && n<=79) printf("C\n");
		else if (60 <= n && n<=69) printf("D\n");
		else if (0 <= n && n<=59) printf("E\n");
		else printf("Score is error!\n");
	}
	return 0;
}



