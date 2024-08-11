#include <string>
#include <vector>
#include <iostream>
using namespace std;

// TODO: 코드가 훨씬 간결해지는 다른 사람 풀이가 있음
void FindFirstFileLocation(const vector<string> &wallpaper, const int &firstLoopRange, const int &secondLoopRange, 
	const int& firstLoopStart, const int& secondLoopStart, int &row, int& col)
{
    static bool isFirst{ true };
	for (int i = firstLoopStart; i < firstLoopRange; ++i)
	{
		for (int j = secondLoopStart; j < secondLoopRange; ++j)
		{
			if (isFirst && wallpaper[i][j] == '#')
			{
                row = i;
                col = j;
                isFirst = false;
				return;
			}
            else if (!isFirst && wallpaper[j][i] == '#')
            {
                col = i;
                return;
            }
		}
	}
}

void FindLastFileLocation(const vector<string>& wallpaper, const int& firstLoopRange, const int& secondLoopRange,
    const int& firstLoopStart, const int& secondLoopStart, int& row, int& col)
{
    static bool isFirst{ true };
    for (int i = firstLoopStart; i >= firstLoopRange; --i)
    {
        for (int j = secondLoopStart; j >= secondLoopRange; --j)
        {
            if (isFirst && wallpaper[i][j] == '#')
            {
                row = i + 1;
                col = j + 1;
                isFirst = false;
                return;
            }
            else if (!isFirst && wallpaper[j][i] == '#')
            {
                col = i + 1;
                return;
            }
        }
    }
}

vector<int> solution(vector<string> wallpaper)
{
	vector<int> answer;

	int row{}, col{};

	FindFirstFileLocation(wallpaper, wallpaper.size(), wallpaper[0].size(), 0, 0, row, col);
	FindFirstFileLocation(wallpaper, col, wallpaper.size(), 0, row + 1, row , col);
	
	answer.push_back(row);
	answer.push_back(col);

    FindLastFileLocation(wallpaper, 0, 0, wallpaper.size() - 1, wallpaper[0].size() - 1, row, col);
    FindLastFileLocation(wallpaper, col, 0, wallpaper[0].size() - 1, row - 1, row, col);

    answer.push_back(row);
    answer.push_back(col);

	return answer;
}

int main()
{
    vector<int> answer = solution({ ".##...##.", "#..#.#..#", "#...#...#", ".#.....#.", "..#...#..", "...#.#...", "....#...." });

    for (const int& num : answer)
    {
        cout << num << " ";
    }
}