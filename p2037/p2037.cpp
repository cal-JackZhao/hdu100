/*
 * p2037.cpp
 *
 *  Created on: Nov 11, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

typedef struct p {
	int s;
	int e;
}p;
p a[101];

bool comp(p x,p y) {
	return x.s<y.s;
}
int main() {
	int n;
	int f[101];
	while (scanf("%d", &n) && n!=0) {
		for (int i=0;i<n;i++) {
			scanf("%d%d",&a[i].s, &a[i].e);
		}
		sort(a,a+n,comp);
		f[0]=1;
		int max;
		for (int i=1;i<n;i++) {
			max=0;
			for (int j=0;j<i;j++) {
				if (a[j].e<=a[i].s && f[j]>max) {
					max=f[j];
				}
			}
			f[i] = max+1;
		}
		max=0;
		for (int i=0;i<n;i++)
			if (f[i]>max) max=f[i];
		printf("%d\n",max);
	}
	return 0;
}



