/*
 * p2047.cpp
 *
 *  Created on: Nov 17, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int n;
	long long f[41][2];
	f[1][0]=2;
	f[1][1]=1;
	for (int i=2;i<41;i++) {
		f[i][0]=f[i-1][0]*2+f[i-1][1]*2;
		f[i][1]=f[i-1][0];
	}
	while (scanf("%d", &n) != EOF) {
		printf("%lld\n", f[n][0]+f[n][1]);
	}
	return 0;
}



