//백준 14264 정육각형과 삼각형
// 정육각형에 내접하는 정 삼각형을 그리면 1개의 정삼각형과 3개의 이등변 삼각형이 나오는데
// 가장 작은 삼각형의 넓이를 구하는 수학 문제다. 
// 120도의 둔각의 삼각형을 가진 이등변 삼각형의 넓이를 구하는 문제 
// 기준 L , 가장 긴변 = sqrt(3)*L , 높이 1/2*L 의 삼각형의 넓이를
// 소수점 10^-9까지 이므로 10lf
#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	double L;
	cin >> L;

	double result = L * L * sqrt(3) / 4;

	printf("%.10lf\n", result);

	return 0;
}
