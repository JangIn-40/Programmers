#include <string>
#include <vector>

using namespace std;

int solution(string my_string)
{
    int answer = 0;
    int temp{};

    for (const char& ch : my_string)
    {
        if (ch <= '9' && ch >= '0')
        {
            temp = (temp + ch - '0') * 10;
        }
        else
        {
            answer += temp / 10;
            temp = 0;
        }
    }
    answer += temp / 10;

    return answer;
}