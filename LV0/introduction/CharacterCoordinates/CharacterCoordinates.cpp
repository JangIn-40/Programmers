#include <string>
#include <vector>
#include <iostream>
using namespace std;

void PrintSolution(vector<int> answer)
{
	cout << "x: " << answer[0] << " y: " << answer[1] << endl;
}

// 만약 board에서 움직이는것이였으면 이렇게 하면 안돼고 if문안에 조건식을 추가해주어야 할것 같다
vector<int> solution(vector<string> keyinput, vector<int> board)
{
	vector<int> answer;
	answer.push_back(0);
	answer.push_back(0);

	for (const string &input : keyinput)
	{
		if (input == "up")
		{
			++answer[1];
		}
		else if (input == "down")
		{
			--answer[1];
		}
		else if (input == "right")
		{
			++answer[0];
		}
		else
		{
			--answer[0];
		}

		answer[0] = answer[0] > board[0] / 2 ? board[0] / 2 : answer[0];
		answer[0] = answer[0] < -(board[0] / 2) ? -(board[0] / 2) : answer[0];
		answer[1] = answer[1] > board[1] / 2 ? board[1] / 2 : answer[1];
		answer[1] = answer[1] < -(board[1] / 2) ? -(board[1] / 2) : answer[1];
	}

	return answer;
}

int main()
{
	solution({ "left", "right", "up", "right", "right" }, { 11, 11 });
}