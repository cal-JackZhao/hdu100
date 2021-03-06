/*
 * p2024.cpp
 *
 *  Created on: Nov 4, 2018
 *      Author: zhaohankai
 */
#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;

bool valid(string s) {
	if (s[0]>='0' && s[0]<='9') return false;
	for (int i=0;i<s.length();i++) {
		if (!(s[i]>='0' && s[i]<='9') && !(s[i]>='a' && s[i]<='z')
				&& !(s[i]>='A' && s[i]<='Z') && s[i]!='_') {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	string s;
	scanf("%d", &n);
	getchar();
	for (int i=0;i<n;i++) {
		getline(cin,s);
		if (valid(s)) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}



