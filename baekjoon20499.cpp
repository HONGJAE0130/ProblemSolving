#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int K, D, A;
	scanf("%d/%d/%d", &K, &D, &A);
	// cin>>K>>D>>A; 처음에 이걸로 했다가 엄청 고생했다.

	if (K + A < D || D == 0) cout << "hasu";
	else cout << "gosu";
}