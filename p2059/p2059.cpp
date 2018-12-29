/*
 * p2059.cpp
 *
 *  Created on: Dec 29, 2018
 *      Author: zhaohankai
 *  Solution from: https://blog.csdn.net/d_x_d/article/details/48199439.
 */
#include<iostream>
#include<cstdio>
#include<limits>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
int main() {
	double l,c,t,vr,vt1,vt2;
	int n;
	double p[102];
	double f[102];
	while (scanf("%lf",&l)!=EOF) {
		memset(f,0,sizeof(f));
		cin>>n>>c>>t;
		cin>>vr>>vt1>>vt2;
		for (int i=1;i<=n;i++)
			cin>>p[i];
		p[n+1]=l;
		for (int i=1;i<=n+1;i++) {
			double time=0,minv=2367625245;
			for (int j=0;j<i;j++) {
				int dis=p[i]-p[j];
				if (dis>c) time=c/vt1+(dis-c)/vt2;
				else time=dis/vt1;
				if (j) time+=t;
				minv=min(minv,f[j]+time);
			}
			f[i]=minv;
		}
		if (f[n+1]<l/vr) {
			printf("What a pity rabbit!\n");
		} else printf("Good job,rabbit!\n");
	}
	return 0;
}



