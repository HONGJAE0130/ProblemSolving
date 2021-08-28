#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> d, int budget) {
	int answer = 0;
	sort(d.begin(), d.end());
	int sum = 0;
	int i = 0;
	for (auto i = d.begin(); i < d.end(); i++) {
		sum += *i;
		if (budget < sum) {
			break;
		}
		answer++;
	}
	/*while(1)
	{
		if(budget >= d[i] && budget!=0 ) {
			budget-=d[i];
			answer++;
			i++;
		}
		else if(d.empty()) break;
		else break;

	}*/
	return answer;
}