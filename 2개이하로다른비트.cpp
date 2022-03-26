#include <string>
#include <vector>

using namespace std;

vector<long long> solution(vector<long long> numbers) {
	vector<long long> answer;

	for (int i = 0; i < numbers.size(); i++) {
		if (numbers[i] % 2 == 0) //짝수 일때
			answer.push_back(numbers[i] + 1);
		else {      //홀수 일 때
			long long bit = 1;
			while (true) {
				if ((numbers[i] & bit) == 0) // ex) ( ( 7 & 8 == 0 ))  ==> ((0111 & 1000) == 0) bit가 겹치는게 없을 때                    
					break;
				bit = bit * 2;
			}
			bit = bit / 2;
			answer.push_back(numbers[i] + bit);
		}
	}

	return answer;
}