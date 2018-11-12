/*
 * p2043.cpp
 *
 *  Created on: Nov 12, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>

int a[4];

void check(char x) {
	int num=0;
	if ('A'<=x && x<='Z') a[0]=1;
	if ('a'<=x && x<='z') a[1]=1;
	if ('0'<=x && x<='9') a[2]=1;
	if (x=='~' || x=='!' || x=='@' || x=='#' || x=='$' || x=='%' || x== '^') a[3]=1;
}

using namespace std;
int main() {
	int n;
	string s;
	cin>>n;
	getchar();
	for (int i=0;i<n;i++) {
		getline(cin,s);
		memset(a,0,sizeof(a));
		int num=0;
		for (int j=0;j<s.length();j++) check(s[j]);
		for (int j=0;j<4;j++) num+=a[j];
		if (num>=3 && s.length()>=8 && s.length()<=16) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}



