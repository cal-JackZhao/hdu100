/*
 * p2040.cpp
 *
 *  Created on: Nov 12, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int sum(int x) {
	if (x==1) return 0;
	int calculator = 0;
	for (int i=1;i<=sqrt(x);i++) {
		if (x%i==0) calculator+=i+x/i;
	}
	return calculator-x;
}

int main() {
	int m,a,b;
	cin>>m;
	for (int i=0;i<m;i++) {
		cin>>a>>b;
		if (sum(a)==b && sum(b)==a) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}



