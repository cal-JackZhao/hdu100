/*
 * p2027.cpp
 *
 *  Created on: Nov 4, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<map>
using namespace std;
int main() {
	map<char,int> dict;
	int n;
	string s;
	scanf("%d\n", &n);
	for (int i=0;i<n;i++) {
		dict.clear();
		getline(cin,s);
		for (int j=0;j<s.length();j++) {
			dict[s[j]]++;
		}
		printf("a:%d\n",dict['a']);
		printf("e:%d\n",dict['e']);
		printf("i:%d\n",dict['i']);
		printf("o:%d\n",dict['o']);
		printf("u:%d\n",dict['u']);
		if (i != n-1) {
			printf("\n");
		}
	}
	return 0;
}



