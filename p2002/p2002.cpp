/*
 * p2002.cpp
 *
 *  Created on: 2018年10月7日
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#define PI 3.1415927
using namespace std;
int main()
{
	double n;
	while (scanf("%lf", &n) != EOF) {
		printf("%.3lf\n", (double)4 / 3 * PI * pow(n, 3));
	}
	return 0;
}



