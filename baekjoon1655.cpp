#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	/*int cen = 10001;
	vector<int> v;
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int num;
		cin>>num;
		if( i%2==1 ){
			if( num  == cen ) cout<<cen<<'\n';
			else if ( num < cen){ cout<< num<<'\n'; cen = num;}
			else if ( num > cen){ cout<< cen<<'\n'; }
		}
		else if(i%2==0 ){
			if( num  == cen ) cout<<cen<<'\n';
			else if ( num < cen){ cout<< cen<<'\n'; }
			else if ( num > cen){ cout<< num<<'\n'; cen = num;}
		}

	}*/
	int t;
	cin >> t;
	priority_queue<int> max; //작은것들의 max값이 top
	priority_queue<int, vector<int>, greater<int>> min; //큰것들의 min값이 top

	while (t--) {
		int a, size;
		cin >> a;
		if (max.size() == min.size()) {        //이미 짝수 일시 max 에 넣기
			max.push(a);
		}
		else {                                 //홀수 면 min 에 넣기
			min.push(a);
		}
		//두 max.top 과 min의 top을 바꿔주기
		if (!max.empty() && !min.empty() && max.top() > min.top()) {
			int max_val, min_val;
			max_val = max.top();
			min_val = min.top();
			max.pop();
			min.pop();
			max.push(min_val);
			min.push(max_val);

		}
		cout << max.top() << '\n';
	}
}