#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	getline(cin, str);
	while (str != "\0") {
		puts(str.c_str());
		getline(cin, str);
	}
	return 0;
}