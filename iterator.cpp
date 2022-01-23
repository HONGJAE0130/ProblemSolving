//���ͷ����� - ��� �����̳� ���� ��� �����ϸ� , �迭�� ��ҿ� ������ó�� ������ �����ϴ�. 
//begin(), end()�� ���� ���� ��� �Ǹ�  vector<int>::itertator it

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v) {
	vector<int>::iterator it;						//iterator ������ �� ����� �Ѵ�.
	for (it = v.begin(); it != v.end(); it++) {		//print �ϱ� ���ؼ� ��� , ���� ���� ++ / ���� �ű�� ���� �ƴ϶� ��ġ�� �ű�� ���̴�
		cout << *it;								// !! ���� �߿��� ������ó�� �����ϱ� ���ؼ� *�� �� �ٿ����Ѵ�.
	}
	cout << endl;
}
int main() {
	int N;
	vector<int> v;
	cin >> N;										

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	print(v);								//ex ) v = { 2 , 0 , 1, 4, 5 }

	vector<int>::iterator it;
	*it = 3;								// 3 0 1 4 5
	it++;									// v[0] ���� v[1]�� �̵�
	(*it)++;								// 3 1 1 4 5

	print(v);
}