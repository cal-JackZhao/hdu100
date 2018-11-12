/*
 * p2036.cpp
 *
 *  Created on: Nov 11, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
using namespace std;

double x[101],y[101];
double area(int p1, int p2) {
	return 0.5*(x[p1]*y[p2]-y[p1]*x[p2]);
}

int main() {
	int n;
	double sum;
	while (scanf("%d", &n) && n!=0) {
		for (int i=0;i<n;i++) {
			scanf("%lf%lf",&x[i],&y[i]);
		}
		sum=area(n-1,0);
		for (int i=0;i<n-1;i++) {
			sum+=area(i,i+1);
		}
		printf("%.1lf\n",sum);
	}
	return 0;
}



