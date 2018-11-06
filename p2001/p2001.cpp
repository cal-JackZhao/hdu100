/*
 * p2001.cpp
 *
 *  Created on: 2018年10月7日
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
double distance(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
int main()
{
	double x1, y1, x2, y2;
	while (scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) != EOF) {
		printf("%.2lf\n", distance(x1, y1, x2, y2));
	}
	return 0;
}



