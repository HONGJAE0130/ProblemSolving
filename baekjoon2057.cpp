#include<iostream>
using namespace std;

//0! + 1! + ... + (n-1)! <= n!
//계속 빼면서 0인지 본다 
int main() {
	long long n, t = 2432902008176640000LL;
	cin >> n;	
	if (!n) n = -1;
	for (int i = 20; i; i--) {
		t /= i;
		if (n >= t) n -= t;
	}
	if (n == 0) cout << "YES";
	else cout << "NO";

	return 0;
}