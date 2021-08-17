#include <iostream>
#include <vector>
using namespace std;

vector<int>root;

int find(int node) {         //벡터 안에 찾으려는 노드와 찾으려는 노드가 같으면
	if (root[node] == node)    //출력
		return node;
	else                    //없으면
		return root[node] = find(root[node]);    //다시 find
}

void uni(int a, int b) {
	int pa = find(a);
	int pb = find(b);
	root[pb] = pa;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num, calc;
	cin >> num >> calc;

	for (int i = 0; i <= num; i++)
		root.push_back(i);            //0부터 num까지 root벡터에 삽입

	int cmd, a, b;
	for (int i = 0; i < calc; i++) {
		cin >> cmd >> a >> b;
		if (cmd == 0) {               //커맨드가 0이면 
			uni(a, b);
		}
		else {                        //커맨드가 1이면 
			if (find(a) == find(b))
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}

	return 0;
}
