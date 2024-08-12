#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal)
{
    string answer = "Yes";
    int p1{}, p2{};

    for (int i = 0; i < goal.size(); ++i)
    {
        if (cards1[p1] == goal[i])
        {
            ++p1;
        }
        else if (cards2[p2] == goal[i])
        {
            ++p2;
        }
        else
        {
            answer = "No";
        }
    }

    return answer;
}