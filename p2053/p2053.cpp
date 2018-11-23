/*
 * p2053.cpp
 *
 *  Created on: Nov 22, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

/* Solution 1: count the number of divisors of n, odd->1, even->0.

int main() {
	int n;
	while (scanf("%d",&n)!=EOF) {
		int sum=0;
		for (int i=1;i<=n;i++)
			if (n%i==0) sum++;
		if (sum%2==0) printf("0\n");
		else printf("1\n");
	}
	return 0;
*/

/* Solution 2: If the number of divisors of n is odd, n is a square number. */
int main() {
	int n;
	while (scanf("%d",&n)!=EOF) {
		double t=sqrt(n*1.0);
		if (t!=(int)t) printf("0\n");
		else printf("1\n");
	}
	return 0;
}



