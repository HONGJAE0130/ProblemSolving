//트리 순회 
// 전위 중위 후위 구현
#include <iostream>
using namespace std;

#define MAX 10000
#define NIL -1

struct Node { int p, l, r; }; //노드 LEFT RIGHT
struct Node T[MAX];
int n;

void pre(int u) {
	if (u == NIL) return;
	cout << " " << u;
	pre(T[u].l);
	pre(T[u].r);
}
void in(int u) {
	if (u == NIL) return;
	pre(T[u].l);
	cout << " " << u;
	pre(T[u].r);
}
void post(int u) {
	if (u == NIL) return;
	pre(T[u].l);
	pre(T[u].r);
	cout << " " << u;
}

int main() {
	int i, v, l, r, root;

	cin >> n;

	for (int i = 0; i < n; i++) {			//노드의 개수 만큼 입력 후 , -1 로 초기화
		T[i].p = NIL;				
	}
	for (int i = 0; i < n; i++) {
		cin >> v >> l >> r;
		T[v].l = l;
		T[v].r = r;
		if (l != NIL) T[v].p = v;
		if (r != NIL) T[v].p = v;
	}
	for (int i = 0; i < n; i++) {			//루트 노트 찾기
		if (T[i].p == NIL) root = i;
	}

	pre(root);
	in(root);
	post(root);

}