/*
 * p2039.cpp
 *
 *  Created on: Nov 12, 2018
 *      Author: zhaohankai
 */
#include<cstdio>
#include<iostream>
using namespace std;
int main() {
	int n;
	double a,b,c;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%lf%lf%lf",&a,&b,&c);
		if (a+b>c && a+c>b && b+c>a) {
			printf("YES\n");
		} else printf("NO\n");
	}
	return 0;
}



