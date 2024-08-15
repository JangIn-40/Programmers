#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food)
{
    string answer = "";

    for (int i = 1; i < food.size(); ++i)
    {
        int count = food[i] / 2;
        if (count)
        {
            for (int j = 0; j < count; ++j)
            {
                answer += i + '0';
            }
        }
    }
    answer += '0' + string(answer.rbegin(), answer.rend());

    return answer;
}