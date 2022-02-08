//16486 백준 운동장 1 바퀴
//한 변 * 2 + 반원 2개 소수점 6자리까지니까 파이도 6번째자리까지 입력
//cout<< 보다는 printf 가 %.6f를 통해서  f 는 double 출력 , .6 은 6번째자리까지 출력한다

#include <iostream>
#define PI 3.141592

using namespace std;
int main() {
	double d1, d2;
	cin >> d1 >> d2;
	printf("%.6f\n", d1 * 2 + 2 * PI * d2); //변 2개 + 2 * (반원)
}
