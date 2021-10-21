// 백준 3009  사각형에서 3개의 점이 주어 질때 나머지 하나의 점을 찾는 문제
// 첫 출력에 x 두 번째 출력에 y 인것으로 보아 
// 1 . x끼리 비교해서 출력 
// 2 . y끼리 비교해서 출력 
/////////////////////////////////////

#include <iostream>
using namespace std;

int main() {
	int x1 = 0, x2 = 0, x3 = 0, y1 = 0, y2 = 0, y3 = 0;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	if (x1 == x2)cout << x3 << " ";
	else if (x1 == x3)cout << x2 << " ";
	else cout << x1 << " ";

	if (y1 == y2)cout << y3;
	else if (y1 == y3)cout << y2;
	else cout << y1;
}