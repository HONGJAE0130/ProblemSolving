#include <iostream>
#include <map>
#include <string>
using namespace std;

void print(map<string, int>T) {
	map<string, int>::iterator it;
	cout << T.size() << endl;
	for (it = T.begin(); it != T.end(); it++) {
		pair<string, int> item = *it;
		cout << item.first << " -->" << item.second << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	map<string, int>T;

	T["red"] = 32;								// ( red, 32)
	T["blue"] = 688;							// ( blue, 688)
	T["yellow"] = 122;							// ( yellow, 122)

	T["blue"] += 312;							// ( blue , 1000)

	print(T);

	T.insert(make_pair("zebra", 101010));		// (zebra, 101010)
	T.insert(make_pair("white", 0));			// (white , 0)
	T.erase("yellow");							// yellow 삭제

	print(T);									// red --> 32  \n blue --> 1000 \n zebra --> 101010 \n white --> 0
	
	pair<string, int> target = *T.find("red");						//red를 찾는 target
	cout << target.first << "-->" << target.second << endl;			// red --> 32

	return 0;
}