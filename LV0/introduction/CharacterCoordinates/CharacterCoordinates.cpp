#include <string>
#include <vector>
#include <iostream>
using namespace std;

void PrintSolution(vector<int> answer)
{
	cout << "x: " << answer[0] << " y: " << answer[1] << endl;
}

// ���� board���� �����̴°��̿����� �̷��� �ϸ� �ȵŰ� if���ȿ� ���ǽ��� �߰����־�� �Ұ� ����
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