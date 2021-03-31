#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	long long n, m, right = 0;
	vector<long long> tree;
	scanf("%lld %lld", &n, &m);
	for (int i = 0; i < n; i++) {
		long long tmp;
		scanf("%lld", &tmp);
		tree.push_back(tmp);
		right = max(right, tmp);
	}

	long long mid = right / 2, left = 0, re = 0;
	while (right >= left) {
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			if (tree[i] > mid) sum += tree[i] - mid;
		}
		if (sum >= m) {
			if (re < mid) re = mid;
			left = mid + 1;
			mid = (left + right) / 2;
		}
		else {
			right = mid - 1;
			mid = (left + right) / 2;
		}
	}
	printf("%d", re);

	return 0;
}
