//�˰���� �ڷᱸ�� �Թ� å ����
//����2263 Ʈ���� ��ȸ / Ʈ�� ���� ��ȸ�� ���� ��ȸ�� �Է��ϸ� ���� ��ȸ�� ����϶�
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
	pos = n-1;												//������ȸ
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
	for (int i = 0; i <	n; i++) {			//����
		cin >> k;
		in.push_back(k);
	}
	for (int i = 0; i < n; i++) {			//����
		cin >> k;
		post.push_back(k);
	}
	solve();
}