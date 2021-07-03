#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#pragma warning(disable : 4996)
#define MAX_LEN 100000 + 1
using namespace std;


int main() {
	// init
	int new_bar = 0;
	int depth = 0;
	int _input_len = 0;
	int answer = 0;

	char _input[MAX_LEN];
	cin >> _input;

	_input_len = strlen(_input);
	// 문자열의 끝까지 탐색해본다. 
	for (int n_idx = 1; n_idx < _input_len; n_idx++) {
		//    ( 를 만나면 depth 는 + 1,  ) 를 만나면 depth 는 -1
		if (_input[n_idx] == '(') depth++;
		else depth--;

		//    만약 (( 구조이면 new_bar 에 하나 추가해준다.
		if (_input[n_idx - 1] == '(' && _input[n_idx] == '(') new_bar++;

		//    만약 ()를 만나면 현재 depth 만큼 정답에 추가하고
		//    new_bar를 0으로 만든다.  
		if (_input[n_idx - 1] == '(' && _input[n_idx] == ')') {
			answer += new_bar + depth + 1;
			new_bar = 0;
		}

	}

	cout << answer;

	return 0;
}
