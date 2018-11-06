/*
 * p2026.cpp
 *
 *  Created on: Nov 4, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
int main() {
	string s;
	while (getline(cin, s)) {
		string result="";
		s = " " +s;
		for (int i=1;i<s.length();i++) {
			if (s[i-1]==' ') {
				result += toupper(s[i]);
			} else {
				result += s[i];
			}
		}
		printf("%s\n",result.c_str());
	}
	return 0;
}



