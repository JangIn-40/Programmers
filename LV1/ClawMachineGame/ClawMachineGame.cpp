#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves)
{
    int answer = 0;
    stack<int> stackBasket;

    for (const auto& row : board)
    {
        bool isFirst = true;
        for (const auto& col : row)
        {
            if (!isFirst)
            {
                cout << ", ";
            }
            cout << col << " ";
            isFirst = false;
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < moves.size(); ++i)
    {
        for (int j = 0; j < board.size(); ++j)
        {
            int doll = board[j][moves[i] - 1];
            if (doll != 0)
            {
                cout << moves[i] << " pick doll " << doll << endl;
                board[j][moves[i] - 1] = 0;
                if (stackBasket.empty() || stackBasket.top() != doll)
                {
                    stackBasket.push(doll);
                }
                else
                {
                    answer += 2;
                    stackBasket.pop();
                }
                break;
            }
        }

        for (const auto& row : board)
        {
            bool isFirst = true;
            for (const auto& col : row)
            {
                if (!isFirst)
                {
                    cout << ", ";
                }
                cout << col << " ";
                isFirst = false;
            }
            cout << endl;
        }
        cout << endl;
    }

    return answer;
}

int main()
{
    solution({ {0, 0, 0, 0, 0}, {0, 0, 1, 0, 3}, {0, 2, 5, 0, 1}, {4, 2, 4, 4, 2}, {3, 5, 1, 3, 1} },
        { 1, 5, 3, 5, 1, 2, 1, 4 });
}