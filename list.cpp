//DLL ����� ���� ����Ʈ�� ���� �ϴ� LIST STL ���� ����
#include <iostream>
#include <list>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
	list<char> l;
	int q, x;
	char com[20];
	cin >> q;

	for (int i = 0; i < q; i++) {
		cin >> com;
		if (com[0] == 'i') {			//insert
			cin >> x;
			l.push_front(x);
		}
		else if (com[6] == 'L') {		//deleteLast
			l.pop_back();
		}
		else if (com[6] == 'F') {		//deleteFirst
			l.pop_front();
		}
		else if (com[0] == 'd') {
			cin >> x;
			for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
				if (*it == x) {
					l.erase(it);
					break;
				}
			}
		}
	}
	int i = 0;
	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		if (i++) cout << " ";
		cout << *it;		
	}

}