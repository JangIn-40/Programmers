#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) 
{
    int answer = 0;

    vector<pair<int, int>> directions = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
    string color = board[h][w];

    for (auto dir : directions)
    {
        int dh = h + dir.first;
        int dw = w + dir.second;

        if (dh >= 0 && dh < board.size() && dw >= 0 && dw < board[0].size() && board[dh][dw] == color)
        {
            ++answer;
        }
    }

    return answer;
}