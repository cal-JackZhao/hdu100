/*
 * p2044.cpp
 *
 *  Created on: Nov 14, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int n,a,b;
	long long f[51];
	cin>>n;
	for (int i=0;i<n;i++) {
		cin>>a>>b;
		f[a]=1;
		f[a+1]=1;
		for (int j=a+2;j<=b;j++) {
			f[j]=f[j-1]+f[j-2];
		}
		cout<<f[b]<<endl;
	}
	return 0;
}



