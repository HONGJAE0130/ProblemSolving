//전반기 2022 웹 데브옵스1번문제에서 이걸 못해서 시간을 다 잡아먹었다. 
//index와 값을 따로 저장해서 정렬하는 방법을 못했다.
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	unordered_map<int, int> m;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
		cin >> v[i];
	vector<int> temp = v;
	sort(temp.begin(), temp.end());			//입력 받은 값을 정렬 한다.
	for (int i = 0; i < n; ++i)
		m[temp[i]] = i;						//m[받은 값 ] = 순서; 
	for (int i = 0; i < n; ++i)
		cout << m[v[i]] << ' ';				//입력 받은 값들의 인덱스를 차례대로 출력한다.
}
