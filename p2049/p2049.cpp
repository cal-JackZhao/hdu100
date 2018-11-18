/*
 * p2049.cpp
 *
 *  Created on: Nov 17, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int c,n,m;
	long long f[21];
	f[1]=0;
	f[2]=1;
	for (int i=3;i<21;i++) {
		f[i]=(i-1)*(f[i-1]+f[i-2]);
	}
	cin>>c;
	for (int i=0;i<c;i++) {
		cin>>n>>m;
		long long sum=1,ans=0;
		for (int j=2;j<=n;j++)
			sum*=j;
		ans=sum;
		sum=1;
		for (int j=2;j<=m;j++)
			sum*=j;
		ans/=sum;
		sum=1;
		for (int j=2;j<=n-m;j++)
			sum*=j;
		ans/=sum;
		printf("%lld\n",ans*f[m]);
	}
	return 0;
}



