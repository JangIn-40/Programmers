#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(string before, string after)
{
    int answer = 1;

    if (before.size() != after.size())
    {
        return answer = 0;
    }

    unordered_map<char, int> beforeMap;
    unordered_map<char, int> afterMap;

    for (const char& ch : before)
    {
        ++beforeMap[ch];
    }

    for (const char& ch : after)
    {
        --beforeMap[ch];
    }

    for (const auto& pair : beforeMap)
    {
        if (pair.second != 0)
        {
            return answer = 0;
        }
    }

    return answer;
}