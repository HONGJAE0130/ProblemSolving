#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(string skill, vector<string> skill_trees)
{
	int answer = 0;
	map<char, int> M;
	int index = 1;
	bool check = false;

	for (int i = 0; i < skill.size(); i++)
	{
		M.insert(make_pair(skill[i], i + 1));
	}

	for (int i = 0; i < skill_trees.size(); i++)
	{
		index = 1;
		check = false;
		for (int j = 0; j < skill_trees[i].size(); j++)
		{
			auto num = M[skill_trees[i][j]];

			if (num > index)
			{
				check = true;
				break;
			}
			else if (num == index)
			{
				index++;
			}
		}
		if (check == false)
			answer++;
	}

	return answer;
}