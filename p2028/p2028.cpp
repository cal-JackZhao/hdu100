/*
 * p2028.cpp
 *
 *  Created on: Nov 5, 2018
 *      Author: zhaohankai
 */
#include<cstdio>
using namespace std;
int gcd(int x,int y) {
	if (y==0) return x;
	else return gcd(y,x%y);
}
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int t;
		long lcs=1;
		for (int i=0;i<n;i++) {
			scanf("%d", &t);
			lcs = lcs/gcd(lcs,t)*t;
		}
		printf("%d\n",lcs);
	}
	return 0;
}



