//첫 풀이 로는 입력에 공백이 있는 걸 보고 getline을 했으나 계속 틀리게 나와서 결국 다르게 하기로 했다.
//cnt가 0~4일 때의 값을 출력하는 방식이라 코드를 바꾸는 데 큰 어려움은 없었다.
#include <iostream>
using namespace std;
int main(void) {
	for (int i = 0; i < 3; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int sum = a + b + c + d;
		if (sum == 0) cout << 'D' << endl;
		else if (sum == 1) cout << 'C' << endl;
		else if (sum == 2) cout << 'B' << endl;
		else if (sum == 3) cout << 'A' << endl;
		else if (sum == 4) cout << 'E' << endl;
	}
}

/* 첫 풀이
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	for(int i=0;i<3;i++){
		int cnt=0;
		cin>>s;
		if(s.find("0"))
			cnt++;

		if(cnt==1) cout<<"A";
		else if(cnt==2) cout<<"B";
		else if(cnt==3) cout<<"C";
		else if(cnt==4) cout<<"D";
		else cout<<"E";
	}

}
*/