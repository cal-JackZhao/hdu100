/*
 * p2060.cpp
 *
 *  Created on: Dec 30, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int n,ball,p,o;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) {
		cin>>ball>>p>>o;
		if (ball>6) {
			p+=(ball-6)*8;
			ball=6;
		}
		p+=(15-ball)*ball/2;
		if (p>=o) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}



