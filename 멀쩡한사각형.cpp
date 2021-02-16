using namespace std;

long long solution(int w, int h) {
	long long answer = 1;
	long long sum = (long long)w * (long long)h;

	int gcd;
	int start = w < h ? w : h;
	for (int i = start; i > 0; i--) {
		if ((w%i == 0) && (h%i == 0)) {
			gcd = i;
			break;
		}
	}
	return sum - gcd * ((w / gcd) + (h / gcd) - 1);
}