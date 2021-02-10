#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	int size = moves.size();
	stack<int> s;
	for (int i = 0; i < moves.size(); i++) {                            //moves가 다 없어질 때까지
		int check = moves[i] - 1;                                 //
		for (int j = 0; j < board.size(); j++) {                        //
			if (board[j][check] != 0)                             //move해야할 인형이 0이 아니면
			{
				if (!s.empty() && s.top() == board[j][check])    //스택이 0이 아니고 스택의top과 move해야할 인형이 같다면 스택pop 인형의 결과 +2;
				{
					s.pop();
					answer += 2;
				}
				else                                            //move해야할 인형 push
					s.push(board[j][check]);
				board[j][check] = 0;                            //해당 좌표 인형을 지웠으니 0으로 만들기
				break;
			}
		}
	}

	return answer;
}