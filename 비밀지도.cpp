#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer;

	for (int i = 0; i < n; i++) {
		int a = arr1[i], b = arr2[i];
		string str;
		for (int j = 0; j < n - 1; j++) {
			((a % 2) || (b % 2)) ? str += "#" : str += " ";
			// a%2 or b%2 중에 하나라도 true면 # 아니면 " "
			a /= 2;                                              //이진수로 변환 하는 과정
			b /= 2;                                              //이진수로 변환 하는 과정
		}
		(a || b) ? str += "#" : str += " ";                     // a or b 중에 하나라도 true면 # 아니면 " " 
		reverse(str.begin(), str.end());        //str은 현재 이진법으로 역순으로 되어있으니 reverse 정렬
		answer.push_back(str);                  //str을 answer에 push_back
	}

	return answer;
}