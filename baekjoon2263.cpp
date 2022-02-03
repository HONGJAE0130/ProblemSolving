//알고리즘과 자료구조 입문 책 공부
//백준2263 트리의 순회 / 트리 중위 순회와 후위 순회를 입력하면 전위 순회를 출력하라
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> pre,in, post;
int pos,n;
struct Node {
	int p, l, r;
};
void rec(int l, int r ){
	if (r <= l) return;
	int root = post[pos--];
	int m = distance(in.begin(), find(in.begin(), in.end(), root));
	pre.push_back(root);
	rec(l, m);
	rec(m + 1, r);
}

void solve() {
	pos = n-1;												//후위순회
	rec(0, post.size());
	for (int i = 0; i < n; i++) {
		if (i) cout << " ";
		cout << pre[i];
	}
	cout << endl;
}
int main() {
	
	cin >> n;
	int k;
	for (int i = 0; i <	n; i++) {			//중위
		cin >> k;
		in.push_back(k);
	}
	for (int i = 0; i < n; i++) {			//후위
		cin >> k;
		post.push_back(k);
	}
	solve();
}