//이제 모든 코드에 설명과 주석을 다는 연습 시작
//삼각형 외우기 
//구현 문제/ 백준 브론즈4 문제 이므로 손 쉽게 가능하다.
//삼각형의 조건에 대해서 만든 문제다
//더 난이도 있게 만들려면 둔각과 예각 삼각형도 만드는 것도 좋을 것 같다.
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a + b + c != 180) cout << "Error";
	else {
		if (a == b && b == c) cout << "Equilateral";
		else if (a != b && b != c && c != a) cout << "Scalene";
		else if (a == b && c != a) cout << "Isosceles";
		else if (a == c && b != a) cout << "Isosceles";
		else if (c == b && a != c) cout << "Isosceles";
	}
}