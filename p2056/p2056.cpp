/*
 * p2056.cpp
 *
 *  Created on: Nov 22, 2018
 *      Author: zhaohankai
 */
#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
	double a1,b1,c1,d1,a2,b2,c2,d2;
	double x1,x2,y1,y2,x3,x4,y3,y4;
	double minx,maxx,miny,maxy;
	while (scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&a1,&b1,&c1,&d1,&a2,&b2,&c2,&d2)!=EOF) {
		x1=min(a1,c1);
		y1=min(b1,d1);
		x2=max(a1,c1);
		y2=max(b1,d1);
		x3=min(a2,c2);
		y3=min(b2,d2);
		x4=max(a2,c2);
		y4=max(b2,d2);
		minx=max(x1,x3);
		maxx=min(x2,x4);
		miny=max(y1,y3);
		maxy=min(y2,y4);
		if (minx > maxx || miny > maxy)
			printf("0.00\n");
		else {
			printf("%.2lf\n", (maxx - minx) * (maxy - miny));
		}
	}
	return 0;
}



