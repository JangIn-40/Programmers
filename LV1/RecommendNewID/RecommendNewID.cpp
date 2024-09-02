#include <string>
#include <vector>
#include <stack>
using namespace std;

string solution(string new_id) 
{
    string answer = "";

    bool appearCurrentDot = false;

    for (char& ch : new_id)
    {
        ch = std::tolower(ch);

        if (std::isalnum(ch) || ch == '-' || ch == '_' || ch == '.')
        {
            if (ch == '.')
            {
                if (appearCurrentDot)
                {
                    continue;
                }
                appearCurrentDot = true;
            }
            else
            {
                appearCurrentDot = false;
            }
            answer += ch;
        }
    }

    if (!answer.empty() && answer.front() == '.')
    {
        answer.erase(answer.begin());
    }
    if (!answer.empty() && answer.back() == '.')
    {
        answer.pop_back();
    }

    if (answer.empty())
    {
        answer = 'a';
    }

    if (answer.size() >= 16)
    {
        answer = answer.substr(0, 15);
        if (answer.back() == '.')
        {
            answer.pop_back();
        }
    }

    while (answer.size() < 3)
    {
        answer += answer.back();
    }

    return answer;
}