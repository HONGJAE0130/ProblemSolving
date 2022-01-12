//행렬테두리회전하기.cpp
//프로그래머스 level 2 벡터를 이용한 구현문제이다.
//어떻게 회전을 시키는지는 머리 속에서는 알고리즘이 돌았으나 
//디테일한 부분에 대해서는 구글링을 통해서 해결한 부분이 많았다. 
//temp를 어떻게 잡아야하는지와 최소값을 어떻게 출력을 할지 생각이 많아졌다. 
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
	for (int i = 0; i < rows; i++) {                        //칸에 숫자 채우기 
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