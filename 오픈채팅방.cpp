#include <string>
#include <vector>
#include <map>											//pair�� map�� �������� �˾Ҵ�. 
#include <algorithm>
#include <iostream>
#include <sstream>										//sstream �������

using namespace std;

vector<string> solution(vector<string> record) {
	vector<string> answer, state;
	map<string, string> user;

	for (int i = 0; i < record.size(); i++)
	{
		string str[3];                                  //3ĭ�� str ���� temp�� ����
		string token;
		stringstream ss(record[i]);                     //ss = record[i]�� ������ �������� ĭ ���� ����
		int index = 0;

		while (ss >> token)                              //token�� ����
			str[index++] = token;                       //str[0][1][2]�� ���, id , �г��� ����

		if (str[0] == "Enter")                           //��ɾ� 
		{
			state.push_back("���� ���Խ��ϴ�.");
			answer.push_back(str[1]);                   //answer�� id ����
			user[str[1]] = str[2];                      //user���� �г��� ����
		}
		else if (str[0] == "Leave")
		{
			state.push_back("���� �������ϴ�.");          //��ɾ� ��� ����
			answer.push_back(str[1]);                   //answer���� id ����
		}
		else                                            //Change �϶�
			user[str[1]] = str[2];                      //user �� �г����� ����
	}

	for (int i = 0; i < answer.size(); i++)
		answer[i] = user[answer[i]] + state[i];			//������ state�� ������ answer�� ������ �������� �״�� answer�� ����

	return answer;
}