//�׷����� �����ϱ� ���� ù PS 
#include <iostream>
using namespace std;

static const int N = 100;

int main() {
	int M[N][N];
	int n, u,k,v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			M[i][j] = 0;
		}
	}
	// u k v v v v v v 
	// ����ȣ || ����ȣ�� ����� ����� ���� || ��� 
	for (int i = 0; i < n; i++) {		
		cin >> u >> k;
		u--;
		for (int j = 0; j < k; j++) {
			cin >> v;
			v--;
			M[u][v] = 1;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j) cout << " ";
			cout << M[i][j];
		}
		cout << endl;
	}

}