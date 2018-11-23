/*
 * p2055.cpp
 *
 *  Created on: Nov 22, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int t,y;
	char ch;
	scanf("%d",&t);
	getchar();
	for (int i=0;i<t;i++) {
		scanf("%c%d",&ch, &y);
		getchar();
		if (ch>='A' && ch<='Z') printf("%d\n",y+ch-'A'+1);
		else printf("%d\n",y-(ch-'a'+1));
	}
	return 0;
}



