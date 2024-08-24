#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{
    string answer = "";

    int i{};
    for (char& ch : s)
    {
        if (ch == ' ')
        {
            i = 0;
        }
        else if (i & 1)
        {
            ch = tolower(ch);
            ++i;
        }
        else
        {
            ch = toupper(ch);
            ++i;
        }
    }

    answer = s;
    return answer;
}