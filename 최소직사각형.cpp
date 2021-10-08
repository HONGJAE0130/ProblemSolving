#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
	int w = 0, h = 0;
	for (int i = 0; i < sizes.size(); i++)
	{
		w = max(w, max(sizes[i][0], sizes[i][1]));    //가로 = 
		h = max(h, min(sizes[i][0], sizes[i][1]));    //세로 = 
	}
	return w * h;
}