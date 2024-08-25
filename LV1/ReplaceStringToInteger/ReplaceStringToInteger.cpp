#include <string>
#include <vector>

using namespace std;

// stoi 안써봄
int solution(string s) 
{
    int answer = 0;
    bool haveSign{}, isNegative{};
    if (s[0] == '-' || s[0] == '+')
    {
        haveSign = true;
        if (s[0] == '-')
        {
            isNegative = true;
        }
    }

    for (int i = haveSign ? 1 : 0; i < s.size(); ++i)
    {
        answer = answer * 10 + s[i] - '0';
    }

    isNegative ? answer = -answer : answer = +answer;
    return answer;
}