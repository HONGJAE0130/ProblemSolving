//ù Ǯ�� �δ� �Է¿� ������ �ִ� �� ���� getline�� ������ ��� Ʋ���� ���ͼ� �ᱹ �ٸ��� �ϱ�� �ߴ�.
//cnt�� 0~4�� ���� ���� ����ϴ� ����̶� �ڵ带 �ٲٴ� �� ū ������� ������.
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

/* ù Ǯ��
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