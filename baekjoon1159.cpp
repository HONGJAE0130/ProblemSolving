#include <iostream>
#include <string>
using namespace std;

int N;
int alphabet[26];
string s = "abcdefghijklmnopqrstuvwxyz";

int main(void) {
	cin >> N;
	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;
		alphabet[input[0] - 'a']++;
	}
	bool predaja = true;
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] >= 5) {
			cout << s[i];
			predaja = false;
		}
	}
	if (predaja) cout << "PREDAJA";
}
/*
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<string> v;
	string answer="";
	for(int i=0;i<n;i++){    // 선수를 명수대로 입력
		string s;
		cin>>s;
		v.push_back(s);
	}
	sort(v.begin(),v.end());// 선수를 이름 순 으로 정렬
	int cnt=0;
	for(int i=1;i<n;i++){
		if(v[i][0] == v[i-1][0]) cnt++;
		else cnt =0;
		if( cnt >= 5) { answer +=v[i][0]; cnt = 0; }
	}
	if(answer=="") cout<<"PREDAJA";
	else cout<<answer;
}*/
