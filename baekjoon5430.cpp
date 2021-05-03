#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	int ts;
	int n;
	int num;
	string s;
	string arr;
	bool reverse;
	bool error;
	deque<int> d;

	cin >> ts;                             //테스트케이스

	while (ts--) {
		d.clear();
		num = 0;
		reverse = false;
		error = false;

		cin >> s;
		cin >> n;
		cin >> arr;

		arr = arr.substr(1, arr.size() - 2);

		for (int i = 0; i < arr.size(); ++i) {
			if (atoi(arr.substr(i, 1).c_str()) != 0 || arr.substr(i, 1).compare("0") == 0) {
				num *= 10;
				num += stoi(arr.substr(i, 1));
			}
			else {
				d.push_back(num);
				num = 0;
			}
		}

		if (num != 0) {
			d.push_back(num);
		}

		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == 'R') {							//R 이면
				reverse = !reverse;						//리버스 false
			}
			else if (s[i] == 'D') {						//
				if (d.empty()) {
					error = true;
					break;
				}
				if (reverse == true) {					//리버스 true면
					d.pop_back();						//뒤에서 제거
				}
				else {
					d.pop_front();						//리버스 false면 앞에서 제거
				}
			}
		}

		if (error) {
			cout << "error" << endl;
			continue;
		}

		cout << "[";
		if (!reverse) {
			while (d.size()) {							//앞에서 부터 cout하며 pop_front
				cout << d.front();
				d.pop_front();
				if (d.size()) {
					cout << ",";
				}
			}
		}
		else {											//뒤에서 부터 cout하며 pop_back
			while (d.size()) {
				cout << d.back();
				d.pop_back();
				if (d.size()) {
					cout << ",";
				}
			}
		}
		cout << "]" << endl;
	}

	return 0;
}