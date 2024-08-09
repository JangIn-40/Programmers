#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total)
{
    vector<int> answer;
    int temp = total / num;
    if (num & 1)
    {
        for (int i = temp - num / 2; i <= temp + num / 2; ++i)
        {
            answer.emplace_back(i);
        }
    }
    else
    {
        for (int i = temp - num / 2 + 1; i <= temp + num / 2; ++i)
        {
            answer.emplace_back(i);
        }
    }


    return answer;
}