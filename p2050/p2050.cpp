/*
 * p2050.cpp
 *
 *  Created on: Nov 17, 2018
 *      Author: zhaohankai
 *  Comment: not completely understood.
 *  Solution from https://blog.csdn.net/zhouhong1026/article/details/7854948.
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int c,n;
	cin>>c;
	for (int i=0;i<c;i++) {
		cin>>n;
		printf("%lld\n",2*n*n-n+1);
	}
	return 0;
}



