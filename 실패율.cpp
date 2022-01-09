#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
bool comp(const pair<double, int> &a, const pair<double, int> &b) {
	//������ ���� ��(��������)
	if (a.first > b.first) {
		return true;
	}
	else if (a.first == b.first) {
		//�������� ���ٸ� �������� ��ȣ�� ��(��������)
		if (a.second < b.second) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}


vector<int> solution(int N, vector<int> stages) {
	vector<int> answer;
	vector<pair<double, int> > failrate;

	sort(stages.begin(), stages.end());

	//�������� ����� ��
	int usernum = stages.size();
	int index = 0;

	for (int i = 1; i <= N; i++) {

		//i��° ���������� ������ ������ ���� ��� �������� 0
		if (usernum == 0) {
			failrate.push_back(make_pair(0, i));
			continue;
		}

		int failcnt = 0;
		//i�� stage�� ���������� Ŭ�������� ���� ����ڼ�
		while (stages[index] == i) {
			failcnt += 1;
			index++;
		}


		double rate = (double)failcnt / usernum;
		failrate.push_back(make_pair(rate, i));

		//i��°������ ������ ������� ���� ���ش�.
		usernum -= failcnt;
	}

	//���� ���ǿ� �°� ����(������ ��������, ����������ȣ ��������)
	sort(failrate.begin(), failrate.end(), comp);

	//���信 �������� ���� ���������� �ε����� �߰��Ѵ�.
	for (int i = 0; i < N; i++) {
		answer.push_back(failrate[i].second);
	}

	return answer;

}