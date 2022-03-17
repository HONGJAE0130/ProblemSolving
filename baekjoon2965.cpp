//백준2965 캥거루 세 마리
//간단한 구현 문제였고
//예제를 보면서 답을 유추하니 답이 바로 나왔다.
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << max(b - a, c - b) - 1;
}