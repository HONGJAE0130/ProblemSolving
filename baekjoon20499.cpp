#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int K, D, A;
	scanf("%d/%d/%d", &K, &D, &A);
	// cin>>K>>D>>A; ó���� �̰ɷ� �ߴٰ� ��û ����ߴ�.

	if (K + A < D || D == 0) cout << "hasu";
	else cout << "gosu";
}