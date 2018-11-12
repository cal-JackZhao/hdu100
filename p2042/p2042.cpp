/*
 * p2042.cpp
 *
 *  Created on: Nov 12, 2018
 *      Author: zhaohankai
 */
#include<cstdio>
#include<iostream>
using namespace std;
int main() {
	int n,t;
	cin>>n;
	for (int i=0;i<n;i++) {
		cin>>t;
		int initial=3;
		for (int j=0;j<t;j++) initial=(initial-1)*2;
		cout<<initial<<endl;
	}
	return 0;
}



