#include <iostream>
using namespace std;

struct Node {
	char p, l, r;
};
int N;

struct Node T[27];

void pre(char N) {
	if (N == '.') return;
	cout << N;
	pre(T[N].l);
	pre(T[N].r);
}
void in(char N) {
	if (N == '.') return;
	in(T[N].l);
	cout << N;
	in(T[N].r);
}
void post(char N) {
	if (N == '.') return;
	post(T[N].l);
	post(T[N].r);
	cout << N;
}
int main() {
	cin >> N;
	char a, b, c;
	for (int i = 1; i <= N; i++) {
		cin >> a >> b >> c;
		T[a].l = b;
		T[a].r = c;
	}

	pre('A');
	cout << endl;
	in('A');
	cout << endl;
	post('A');
	cout << endl;

	return 0;
}