/*
 * p2046.cpp
 *
 *  Created on: Nov 14, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	long long f[51];
	int n;
	f[1]=1;
	f[2]=2;
	for (int i=3;i<=50;i++) {
		f[i]=f[i-1]+f[i-2];
	}
	while (scanf("%d",&n)!=EOF) {
		printf("%lld\n",f[n]);
	}
	return 0;
}



