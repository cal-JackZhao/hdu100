/*
 * p2033.cpp
 *
 *  Created on: Nov 11, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int n;
	int s1,s2,f1,f2,m1,m2;
	scanf("%d", &n);
	for (int i = 0;i<n;i++){
		scanf("%d%d%d%d%d%d", &s1,&f1,&m1,&s2,&f2,&m2);
		int s,f,m;
		m = m1 + m2;
		f = f1 + f2;
		s = s1 + s2;
		f+=m/60;
		m=m%60;
		s+=f/60;
		f=f%60;
		printf("%d %d %d\n",s,f,m);
	}
	return 0;
}






