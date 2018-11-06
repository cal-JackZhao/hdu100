/*
 * p2019.cpp
 *
 *  Created on: 2018年10月10日
 *      Author: zhaohankai
 */
#include<queue>
#include<cstdio>
using namespace std;

struct cmp {
	bool operator() (int x, int y) {
		return x>y;
	}
};

int main() {
	int n, x;
	priority_queue<int, vector<int>, cmp> a;
	while (scanf("%d%d", &n, &x) && (n != 0 || x != 0)) {
		a.push(x);
		for (int i = 0; i < n; i++) {
			int t;
			scanf("%d", &t);
			a.push(t);
		}
		while (a.size() > 1) {
			printf("%d ", a.top());
			a.pop();
		}
		printf("%d\n", a.top());
		a.pop();
	}
	return 0;
}



