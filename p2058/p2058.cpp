/*
 * p2058.cpp
 *
 *  Created on: Dec 21, 2018
 *      Author: zhaohankai
 */
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int sum(int x,int y) {
	return (x+y)*(y-x+1)/2;
}

int main() {
	int n,m,t;
	while (scanf("%d%d",&n,&m) && (n!=0 || m!=0)) {
		/*
		Note:Time Limit Exceeded way

		int head=1, tail=1;
		while (tail<=n && tail<=m) {
			while (sum(head,tail)>m)
				head++;
			if (sum(head,tail)==m) {
				printf("[%d,%d]\n",head,tail);
			}
			if (head>tail) break;
			tail++;
		}
		*/
		/*
		 * Solution from https://blog.csdn.net/wu_lai_314/article/details/8228120.
		 * for a+1,a+2,...,a+d
		 * m=a*d+(1+d)*d/2
		 * so d*d<2*m
		 */
		for (int d = sqrt(2*m); d>0;d--) {
			t=m-(1+d)*d/2;
			if (t%d==0){
				int a=t/d;
				printf("[%d,%d]\n",a+1,a+d);
			}
		}
		cout<<endl;
	}
	return 0;
}



