#include <string>
#include <vector>
#include <cmath>
using namespace std;

string solution(vector<int> numbers, string hand) {
	string answer = "";
	int right = 12; int left = 10;
	if (hand == "right") {
		for (int i = 0; i < numbers.size(); i++)
		{
			if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7) {
				answer += "L";
				left = numbers[i];
			}
			else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9) {
				answer += "R";
				right = numbers[i];
			}
			else {
				if (numbers[i] == 0)
					numbers[i] = 11;
				int l = abs(left - numbers[i]);
				int r = abs(right - numbers[i]);

				int leftDist = (l / 3) + (l % 3);
				int rightDist = (r / 3) + (r % 3);

				if (leftDist == rightDist) {
					answer += "R";
					right = numbers[i];
				}
				else if (leftDist < rightDist)
				{
					answer += "L";
					left = numbers[i];
				}
				else
				{
					answer += "R";
					right = numbers[i];
				}
			}
		}
	}
	else if (hand == "left"){
		for (int i = 0; i < numbers.size(); i++)
		{
			if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7) {
				answer += "L";
				left = numbers[i];
			}
			else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9) {
				answer += "R";
				right = numbers[i];
			}
			else {
				if (numbers[i] == 0)
					numbers[i] = 11;
				int l = abs(left - numbers[i]);
				int r = abs(right - numbers[i]);

				int leftDist = (l / 3) + (l % 3);
				int rightDist = (r / 3) + (r % 3);

				if (leftDist == rightDist) {
					answer += "L";
					right = numbers[i];
				}
				else if (leftDist < rightDist)
				{
					answer += "L";
					left = numbers[i];
				}
				else
				{
					answer += "R";
					right = numbers[i];
				}
			}
		}
	}
	return answer;
}