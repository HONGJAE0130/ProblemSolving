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
			// a%2 or b%2 �߿� �ϳ��� true�� # �ƴϸ� " "
			a /= 2;                                              //�������� ��ȯ �ϴ� ����
			b /= 2;                                              //�������� ��ȯ �ϴ� ����
		}
		(a || b) ? str += "#" : str += " ";                     // a or b �߿� �ϳ��� true�� # �ƴϸ� " " 
		reverse(str.begin(), str.end());        //str�� ���� ���������� �������� �Ǿ������� reverse ����
		answer.push_back(str);                  //str�� answer�� push_back
	}

	return answer;
}