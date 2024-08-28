#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor)
{
    vector<int> answer;
    for (const int& num : arr)
    {
        if (num % divisor == 0)
        {
            answer.emplace_back(num);
        }
    }

    sort(answer.begin(), answer.end());
    if (answer.empty())
    {
        answer.emplace_back(-1);
    }
    return answer;
}