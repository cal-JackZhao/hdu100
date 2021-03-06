/*
 * p2023.cpp
 *
 *  Created on: 2018年10月18日
 *      Author: zhaohankai
 */
#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int n, m;
	double averages[100];
	double averagec[10];
	int a[51][6];
	while (scanf("%d%d", &n, &m) != EOF) {
		memset(a,0,sizeof(a));
		memset(averages,0,sizeof(averages));
		memset(averagec,0,sizeof(averagec));
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++) {
				scanf("%d", &a[i][j]);
			}
		}
		for (int i=0;i<n;i++) {
			double sum=0;
			for (int j=0;j<m;j++) {
				sum += a[i][j];
				averagec[j]+=a[i][j];
			}
			averages[i]=sum/m;
		}
		for (int i=0;i<m;i++) {
			averagec[i]=averagec[i]/n;
		}
		int num=0;
		for (int i=0;i<n;i++) {
			bool f=true;
			for (int j=0;j<m;j++) {
				if (a[i][j]<averagec[j]) {
					f=false;
					break;
				}
			}
			if (f) {
				num++;
			}
		}
		for (int i=0;i<n-1;i++) {
			printf("%.2lf ",averages[i]);
		}
		printf("%.2lf\n",averages[n-1]);
		for (int i=0;i<m-1;i++) {
			printf("%.2lf ",averagec[i]);
		}
		printf("%.2lf\n",averagec[m-1]);
		printf("%d\n",num);
		printf("\n");
	}
	return 0;
}



