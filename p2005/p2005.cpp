/*
 * p2005.cpp
 *
 *  Created on: 2018年10月8日
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<sstream>
using namespace std;

bool is_leap(int year) {
	return year % 4 == 0 && !(year % 100 == 0 && year % 400 != 0);
}

int main() {
	const int calender1[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	const int calender2[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string s;
	while (getline(cin, s)) {
		s += '/';
		int pos1 = s.find('/');
		stringstream ss;
		int year = 0;
		ss << s.substr(0, pos1);
		ss >> year;
		ss.clear();
		int month = 0;
		s.replace(pos1, 1, "-");
		int pos2 = s.find('/');
		ss << s.substr(pos1 + 1, pos2 - pos1 - 1);
		ss >> month;
		ss.clear();
		s.replace(pos2, 1, "-");
		int pos3 = s.find('/');
		int day = 0;
		ss << s.substr(pos2 + 1, pos3 - pos2 - 1);
		ss >> day;
		/* string process end */
		int ans = 0;
		for (int i = 1; i <= month - 1; i++) {
			if (is_leap(year)) ans += calender2[i];
			else ans += calender1[i];
		}
		ans += day;
		printf("%d\n", ans);
	}
	return 0;
}



