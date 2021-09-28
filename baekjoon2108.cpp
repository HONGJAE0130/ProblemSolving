#include <iostream>
#include <cmath>
#include <stdio.h>
#include <utility>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
	int n;
	cin >> n;

	int sum = 0;
	int tmp;
	int max = 0;
	int mode = 0;
	bool isSecond = false;

	vector<int> array(n);
	vector<int> count(8001, 0);

	for (int i = 0; i < n; i++) {
		cin >> array[i];
		tmp = (array[i] <= 0) ? abs(array[i]) : array[i] + 4000;
		sum += array[i];
		count[tmp] += 1;
		if (count[tmp] > max) {
			max = count[tmp];
		}
	}

	int middle = round(n / 2);

	sort(array.begin(), array.end());

	for (int i = -4000; i < 4001; i++) {
		tmp = i <= 0 ? abs(i) : i + 4000;
		if (count[tmp] == max) {
			mode = i;
			if (isSecond) break;
			isSecond = true;
		}
	}

	cout << round(sum / (double)n) << "\n";
	cout << array[middle] << "\n";
	cout << mode << "\n";
	cout << array[array.size() - 1] - array[0];

}