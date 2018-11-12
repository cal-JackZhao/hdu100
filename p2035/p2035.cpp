/*
 * p2035.cpp
 *
 *  Created on: Nov 11, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int a,b,ans;
	scanf("%d%d",&a,&b);
	while (a!=0 || b!=0) {
		ans=1;
		for (int i=0;i<b;i++) {
			ans=(ans*a)%1000;
		}
		printf("%d\n",ans);
		scanf("%d%d",&a,&b);
	}
	return 0;
}



