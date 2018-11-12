/*
 * p2034.cpp
 *
 *  Created on: Nov 11, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main() {
	int n,m,num;
	int a[101],b[101],c[101];
	while (scanf("%d%d",&n,&m) && (n!=0 || (m!=0))) {
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		num=0;
		for (int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		for (int i=0;i<m;i++) {
			scanf("%d",&b[i]);
		}
		for (int i=0;i<n;i++) {
			bool f=true;
			for (int j=0;j<m;j++) {
				if (a[i]==b[j]) {
					f=false;
					break;
				}
			}
			if (f) {
				c[num++]=a[i];
			}
		}
		if (num==0) {
			printf("NULL\n");
			continue;
		}
		sort(c,c+num);
		for (int i=0;i<num;i++) {
			printf("%d ",c[i]);
		}
		printf("\n");
	}
	return 0;
}



