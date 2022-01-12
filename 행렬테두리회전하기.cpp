//����׵θ�ȸ���ϱ�.cpp
//���α׷��ӽ� level 2 ���͸� �̿��� ���������̴�.
//��� ȸ���� ��Ű������ �Ӹ� �ӿ����� �˰����� �������� 
//�������� �κп� ���ؼ��� ���۸��� ���ؼ� �ذ��� �κ��� ���Ҵ�. 
//temp�� ��� ��ƾ��ϴ����� �ּҰ��� ��� ����� ���� ������ ��������. 
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int minv;
int v[100][100];
void comp(int val) {
	minv = min(minv, val);
}
vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
	vector<int> answer;
	for (int i = 0; i < rows; i++) {                        //ĭ�� ���� ä��� 
		for (int j = 0; j < columns; j++) {
			v[i][j] = i * columns + j + 1;
		}
	}


	for (int i = 0; i < queries.size(); i++) {
		minv = rows * columns;
		int y1 = queries[i][0] - 1;
		int x1 = queries[i][1] - 1;
		int y2 = queries[i][2] - 1;
		int x2 = queries[i][3] - 1;
		int temp = v[y1][x1];
		comp(temp);
		for (int i = y1; i < y2; i++) {
			v[i][x1] = v[i + 1][x1];
			comp(v[i + 1][x1]);
		}
		for (int j = x1; j < x2; j++) {
			v[y2][j] = v[y2][j + 1];
			comp(v[y2][j + 1]);
		}
		for (int i = y2; i > y1; i--) {
			v[i][x2] = v[i - 1][x2];
			comp(v[i - 1][x2]);
		}
		for (int j = x2; j > x1 + 1; j--) {
			v[y1][j] = v[y1][j - 1];
			comp(v[y1][j - 1]);
		}
		v[y1][x1 + 1] = temp;
		answer.push_back(minv);
	}
	return answer;
}