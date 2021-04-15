#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string input;
	while (input != "0") {
		cin >> input;
		string buf = input; //reverse 하기 전 값을 저장 
		reverse(input.begin(), input.end()); // input문자열을 reverse 
		if (input != "0") {
			if (input == buf) cout << "yes\n";
			else cout << "no\n";
		}
	}

	return 0;
}