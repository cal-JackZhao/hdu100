/*
 * p2025.cpp
 *
 *  Created on: Nov 4, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main() {
	string s;
	while (getline(cin, s)) {
		char ch = s[0];
		string result = "";
		for (int i=0;i<s.length();i++) {
			if (s[i] > ch) {
				ch = s[i];
			}
		}
		for (int i=0;i<s.length();i++) {
			result += s[i];
			if (s[i] == ch) {
				result += "(max)";
			}
		}
		printf("%s\n",result.c_str());
	}
	return 0;
}



