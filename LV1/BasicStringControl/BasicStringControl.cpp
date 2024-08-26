#include <string>
#include <vector>

using namespace std;

bool solution(string s) 
{
    bool answer = true;
    if (s.size() != 4 && s.size() != 6)
    {
        return answer = false;
    }

    for (const char& ch : s)
    {
        if (ch < '0' || ch > '9')
        {
            answer = false;
            break;
        }
    }

    return answer;
}