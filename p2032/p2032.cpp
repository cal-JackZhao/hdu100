/*
 * p2032.cpp
 *
 *  Created on: Nov 5, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int a[32],b[32];
	int n;
	while (scanf("%d", &n)!=EOF) {
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		a[1]=1;
		for (int i=1;i<=n;i++) {
			for (int j=1;j<i;j++) {
				printf("%d ",a[j]);
			}
			printf("%d\n",a[i]);
			for (int j=1;j<=i+1;j++) {
				b[j]=a[j]+a[j-1];
			}
			for (int j=1;j<=i+1;j++) {
				a[j]=b[j];
			}
		}
		printf("\n");
	}
	return 0;
}



