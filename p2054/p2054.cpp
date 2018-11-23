/*
 * p2054.cpp
 *
 *  Created on: Nov 22, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

bool check(char s[]) {
	int len=strlen(s);
	for (int i=0;i<len;i++) {
		if (s[i]=='.') return true;
	}
	return false;
}

void trans(char s[]) {
	if (check(s)) {
		int len=strlen(s);
		for (int i=len-1;i>=0;i--) {
			if (s[i]=='0') s[i]='\0';
			else {
				if (s[i]=='.') s[i]='\0';
				break;
			}
		}
	}
}

int main() {
	char x[100000],y[100000];
	while (scanf("%s %s",x,y)!=EOF) {
		trans(x);
		trans(y);
		if (strcmp(x,y)==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}



