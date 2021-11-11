#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s = "";
	getline(cin, s);					//스페이스를 포함하는 문자열을 받기때문에 getline을 사용한다.
	s += '\n';
	stack<char> st;
	bool check = false;
	for (int i = 0; i < s.size(); i++) {

		if (s[i] == '<') {					//< > 이 입력됐을 때는 그냥 그래도 출력
			while (!st.empty()) {
				cout << st.top();
				st.pop();
			}
			cout << "<";
			check = true;
		}
		else if (s[i] == '>') {
			cout << ">";
			check = false;
		}
		else if (check) cout << s[i]; //그냥 받자마자 출력하자

		else if (s[i] == ' ' || s[i] == '\n') {		//공백 출력
			while (!st.empty()) {
				cout << st.top();
				st.pop();
			}
			cout << " ";			
		}
		else st.push(s[i]);			//
	}
	return 0;
}
