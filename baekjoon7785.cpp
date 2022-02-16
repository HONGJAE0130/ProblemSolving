#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	set<string> string_set;
	//status 가 enter 면 입장시키고 아니면 지우기
	while (n--) {
		string name,status;
		cin >> name >> status;
		//enter 아니면 leave가 나오기 때문에 
		if (status == "enter")
			string_set.insert(name);
		else
			string_set.erase(name);		
	}

	for (auto iter = string_set.rbegin(); iter != string_set.rend(); iter++)
		cout << *iter << "\n";
}