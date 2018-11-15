/*
 * p2045.cpp
 *
 *  Created on: Nov 14, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
	int n;
	long long f[51];
	f[1]=3;
	f[2]=6;
	f[3]=6;
	for (int i=4;i<=50;i++)
		f[i]=f[i-2]*2+f[i-1];
	while (scanf("%d",&n)!=EOF) {
		printf("%lld\n",f[n]);
	}
	return 0;
}



