/*
 * p2057.cpp
 *
 *  Created on: Dec 21, 2018
 *      Author: zhaohankai
 *  Solution From: https://blog.csdn.net/tigerisland45/article/details/51828341
 *  note: no need to use string.
 */
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main() {
	long long a,b;
	while (scanf("%llx%llx",&a,&b)!=EOF) {
		long long result=a+b;
		if (result>=0)
			printf("%llX\n",result);
		else
			printf("-%llX\n",-result);
	}

	return 0;
}


