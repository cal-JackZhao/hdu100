/*
 * p2031.cpp
 *
 *  Created on: Nov 5, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main() {
	int n,r;
	while (scanf("%d%d", &n,&r)!=EOF) {
		string s = "";
		int t=n;
		if (n<0) n=-n;
		while (n>0) {
			int t=n%r;
			n=n/r;
			char ch;
			if (t>9) ch='A'+t-10;
			else ch='0'+t;
			s=ch+s;
		}
		if (t<0) s='-'+s;
		printf("%s\n",s.c_str());
	}
	return 0;
}




