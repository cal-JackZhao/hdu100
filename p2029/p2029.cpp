/*
 * p2029.cpp
 *
 *  Created on: Nov 5, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

bool check(string s) {
	for (int i=0;i<s.length()/2+1;i++) {
		if (s[i] != s[s.length()-i-1]) return false;
	}
	return true;
}

int main() {
	int n;
	scanf("%d",&n);
	getchar();
	string s;
	for (int i=0;i<n;i++) {
		getline(cin,s);
		if (check(s)) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}



