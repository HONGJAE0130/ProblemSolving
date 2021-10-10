#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ���簢���� ��� ���� x,y�࿡ �����ϹǷ� ������ x�࿡�� 2���� ���ڰ� ���ǰ�  y�࿡�� 2���� ���ڰ� ���ȴ�.

vector<int> solution(vector<vector<int> > v) {
	vector<int> ans;
	vector<int> x;
	vector<int> y;
	for (int i = 0; i < 3; i++)
	{
		x.push_back(v[i][0]);					//x�� 
		y.push_back(v[i][1]);					//y��
	}
	sort(x.begin(), x.end());					//����
	sort(y.begin(), y.end());					//����
	if (x[0] == x[1]) ans.push_back(x[2]);		//x [ 0 1 2 ] �߿� ����� �������� ���ϸ� ������ ���̳��´�.
	else ans.push_back(x[0]);
	if (y[0] == y[1]) ans.push_back(y[2]);		//�� [ 0 1 2 ] �߿� ����� �������� ���ϸ� ������ ���̳��´�.
	else ans.push_back(y[0]);


	return ans;
}