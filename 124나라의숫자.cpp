#include <string> 
#include <iostream> 
using namespace std;
string solution(int n) {
	string answer = "";
	char end[3] = { '4','1','2' };

	while (n > 0) {

		int r = n % 3; // 1. �־��� �ڿ��� n�� 3���� ���� �������� ���Ѵ�. (n>0) 

		answer = end[r] + answer; //������ ���� �������� 124 ���� ������ ���ڸ��� ���ؼ� �տ� ���Ѵ�. (�� �ڸ� ��Ģ) 

		n = (n - 1) / 3; // n�� ���� (n-1)/3���� ��ü�� �� �� ������ ��Ǯ�� �Ѵ�. (3���� ��Ģ)

	}
	cout << n;

	return answer;
}