#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int point;
	int tmp = 0;
	int result = 0;
	while (N--) {                    //N만큼 반복        
		cin >> point;                //OX 를 1과 0 입력
		if (point == 1) { tmp++; }     //정답일시 tmp +1;
		else { tmp = 0; }             //오답일시 tmp 0으로 초기화
		result += tmp;              //최종 결과에 tmp   
	}
	cout << result;

	return 0;
}