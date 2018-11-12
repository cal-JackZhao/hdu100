/*
 * p2041.cpp
 *
 *  Created on: Nov 12, 2018
 *      Author: zhaohankai
 */
#include<cstdio>
#include<iostream>
using namespace std;
int main() {
	int m,t;
	cin>>m;
	int a[41];
	for (int i=0;i<m;i++) {
		cin>>t;
		a[1]=1;
		a[2]=1;
		for (int j=3;j<=t;j++) {
			a[j]=a[j-1]+a[j-2];
		}
		printf("%d\n",a[t]);
	}
	return 0;
}



