#include <string>
#include <vector>
#include <iostream>
using namespace std;

void PrintUnsafeZone(vector<vector<bool>> unsafe, vector<vector<int>> board)
{
	static int count{};

	cout << ++count << "=============================" << endl;
	for (const auto& row : board)
	{
		for (const auto& col : row)
			cout << boolalpha << col << " ";
		cout << endl;
	}
	cout << "==============================" << endl;
	for (const auto& row : unsafe)
	{
		for (const auto& col : row)
			cout << boolalpha << col << " ";
		cout << endl;
	}
}

// TODO: 더 간결한 풀이 있음
int solution(vector<vector<int>> board)
{
	int answer = 0;
	int boardSize = (int)board[0].size();
	vector<vector<bool>> unsafe{ (size_t)boardSize, vector<bool>(boardSize) };

	int num{};
	for (int row = 0; row < boardSize; ++row)
	{
		for (int col = 0; col < boardSize; ++col)
		{
			if (board[row][col] == 0 && !unsafe[row][col])
			{
				++answer;
			}
			else if(!unsafe[row][col])
			{
				unsafe[row][col] = true;
				for (int i = -1; i <= 1; ++i)
				{
					for (int j = -1; j <= 1; ++j)
					{
						bool outOfRow = row + i < boardSize && row + i >= 0;
						bool outOfCol = col + j < boardSize && col + j >= 0;
						int unsafeRow = row + i;
						int unsafeCol = col + j;
						if (outOfRow && outOfCol && !unsafe[unsafeRow][unsafeCol] && board[unsafeRow][unsafeCol] == 0)
						{
							if (unsafeRow < row || (unsafeRow == row && unsafeCol < col))
							{
								--answer;
							}
							unsafe[unsafeRow][unsafeCol] = true;
						}
					}
				}
                PrintUnsafeZone(unsafe, board);
            }
		}
	}

	if (answer < 0)
		answer = 0;

	return answer;
}

int main()
{
	cout << solution({ { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
		{ 0, 0, 1, 1, 0 }, { 0, 0, 0, 0, 0 } });
}