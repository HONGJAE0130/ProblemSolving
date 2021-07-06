#include <iostream>
#include <string>
using namespace std;
int Findseries(int N)
{
	int i = 666;
	int series = 0;
	string target;
	while (1)
	{
		target = to_string(i);									//target에 "666" 를 string으로 저장
		for (int j = 0; j < target.length() - 2; j++)			//
			if (target[j] == '6' && target[j + 1] == '6' && target[j + 2] == '6')   //연속적으로 6이  3개가 나오면 series++ 하고 series가 N( 입력한 수) 와 같으면 i를 출력
			{
				series++;
				if (series == N)
					return i;
				break;
			}
		i++;					//연속 666이 아니면 i++
	}
}
int main() {
	int N;
	cin >> N;
	cout << Findseries(N);
}