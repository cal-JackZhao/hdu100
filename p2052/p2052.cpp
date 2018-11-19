/*
 * p2052.cpp
 *
 *  Created on: Nov 18, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main() {
	int n,m;
	char a[76][76];
	while (scanf("%d%d",&n,&m)!=EOF) {
		memset(a,0,sizeof(a));
		for (int i=0;i<=m+1;i++) {
			for (int j=0;j<=n+1;j++)
				a[i][j]=' ';
		}
		a[0][0]='+';
		a[0][n+1]='+';
		a[m+1][0]='+';
		a[m+1][n+1]='+';
		for (int i=1;i<=n;i++) {
			a[m+1][i]='-';
			a[0][i]='-';
		}
		for (int i=1;i<=m;i++) {
			a[i][0]='|';
			a[i][n+1]='|';
		}
		for (int i=0;i<=m+1;i++) {
			for (int j=0;j<=n+1;j++)
				printf("%c",a[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}



