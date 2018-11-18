/*
 * p2051.cpp
 *
 *  Created on: Nov 17, 2018
 *      Author: zhaohankai
 */
#include<cstdio>
#include<iostream>
using namespace std;
int main() {
	int n;
	int a[100];
	while (scanf("%d", &n)!=EOF) {
		int num=0;
		while (n>0) {
			a[num++]=n%2;
			n=n/2;
		}
		for (int i=num-1;i>=0;i--){
			printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}



