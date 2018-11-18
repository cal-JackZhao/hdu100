/*
 * p2048.cpp
 *
 *  Created on: Nov 17, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int c,n;
	long long f[21];
	f[1]=0;
	f[2]=1;
	for (int i=3;i<21;i++) {
		f[i]=(i-1)*(f[i-1]+f[i-2]);
	}
	cin>>c;
	for (int i=0;i<c;i++) {
		cin>>n;
		long long sum=1;
		for (int j=1;j<=n;j++)
			sum*=j;
		printf("%.2lf%%\n",(double) f[n]/sum*100);
	}
	return 0;
}



