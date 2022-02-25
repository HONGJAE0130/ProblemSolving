//최소값을 만들기 위해서는 가장 큰 값을 가장 작은 값과 곱하는 것 최선이다
#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
	int answer = 0;
	int size = A.size();

	
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	for (int i = 0; i < A.size(); i++) {
		answer = answer + (A[i] * B[size - 1 - i]);
	}

	return answer;
}