#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> prices) {
	vector<int> answer(prices.size());
	stack<int> st;
	for (int i = 0; i < prices.size(); i++)
	{
		//price 와 answer의 사이즈는 같다
		while (!st.empty() && prices[st.top()] > prices[i])
		{
		//스택이 비어있고 스택의 마지막 값이 현재 값보다 크다
			answer[st.top()] = i - st.top();
			//가격이 떨어졌다면  i-스택 대입
			st.pop();
			//팝
		}
		//현재 인덱스 스택 삽입
		st.push(i);
	}
	while (!st.empty()) {
		answer[st.top()] = prices.size() - st.top() - 1;
		st.pop();
	}

	return answer;
}