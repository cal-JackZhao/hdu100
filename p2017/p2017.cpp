/*
 * p2017.cpp
 *
 *  Created on: 2018年10月10日
 *      Author: zhaohankai
 */
#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
using namespace std;
int main() {
	int n;
	string s;
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		int count = 0;
		for (int k = 0; k < s.size(); k++) {
			if (s[k] >= '0' && s[k] <= '9') {
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}



