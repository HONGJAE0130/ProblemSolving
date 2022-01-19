//<프로그래밍 대회 공략을 위한 알고리즘과 자료구조 입문 > 책에 수록된 STACK 부분에 나온 예제
// 백준 2257이다 stack을 이용해서 문제를 푸는 과정이지만 틀린 결과만 나오게 되어서 어느 부분이 틀렸는지 계속 디버깅 하고 있다.
// 구글링을 해서 다른 사람들의 코드와 비교 했을 때 보기 힘들 정도로 지저분 하지만 점점 줄여 나가야겠다.
/*#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack<char> s;
	string str;
	cin >> str;
	int answer = 0;
	for (int i = 0; i < str.length(); i++) {
		s.push(str[i]);
	}
	int a = 0;
	for(int i=0;i<str.length();i++) {
		int b = 1;
		if (s.top() == 'H') {
			a = 1;
			s.pop();
			answer += a * b;
		}
		else if (s.top() == 'C') {
			a = 12;
			s.pop();
			answer += a * b;
		}
		else if(s.top() == 'O') {
			a = 14;
			s.pop();
			answer += a * b;
		}
		else if (s.top() <= '9' || s.top() >= '2') {
			b = s.top();
			s.pop();
		}
		else if (s.top() == ')') {		
			int temp = 0;
			int k = 1;
			s.pop();
			while (s.top() != '(') {
				if (s.top() == 'H') {
					a = 1;
					s.pop();
					temp += a * k;
				}
				else if (s.top() == 'C') {
					a = 12;
					s.pop();
					temp += a * k;
				}
				else if (s.top() == 'O') {
					a = 14;
					s.pop();
					temp += a * k;
				}
				else if (s.top() <= '9' || s.top >= '2') {
					k = s.top();
					s.pop();
				}
			}
			s.pop();
			answer += temp * b;
		}		
	}
	cout << answer;
}*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <set>

#define INF 987654321
#define endl "\n"

using namespace std;

int arr[100];
pair<char, int> atom[3]={{'H', 1}, {'C', 12}, {'O', 16}};

bool is_alpha(char c)
{
  return (c>='A' && c<='Z');
}

bool is_num(char c)
{
  return (c>='2' && c<='9');
}

int get_chemical(string s)
{
  int st=0;
  int temp;

  for(int i=0; i<s.size(); i++)
  {
    if(is_alpha(s[i]))
    {
      for(int j=0; j<3; j++)
      {
        if(s[i]==atom[j].first) arr[st]+=temp=atom[j].second;
      }
    }
    else if(s[i]=='(') arr[++st]=0;
    else if(s[i]==')') arr[st-1]+=temp=arr[st], st--;
    else if(is_num(s[i])) arr[st]+=temp*(s[i]-'0'-1);
  }

  return arr[0];
}



int main()
{
  string s;
  cin>>s;

  cout<<get_chemical(s);
}


