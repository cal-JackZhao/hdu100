/*
 * p2030.cpp
 *
 *  Created on: Nov 5, 2018
 *      Author: zhaohankai
 */
#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    int n;
    string s;
    scanf("%d\n", &n);
    int num;
    for (int i=0;i<n;i++) {
    	getline(cin,s);
    	num=0;
    	for (int j=0;j<s.length();j++) {
    		if (s[j]<0) num++;
    	}
    	printf("%d\n",num/2);
    }
    return 0;
}


