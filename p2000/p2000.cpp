/*
 * p2000.cpp
 *
 *  Created on: 2018年10月7日
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main() {
	char s[3];
	while (scanf("%s", s) != EOF) {
		sort(s,s+strlen(s));
		printf("%c %c %c\n", s[0], s[1], s[2]);
	}
	return 0;
}



