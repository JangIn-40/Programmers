#include <string>
#include <iostream>
using namespace std;

// if문과 return문 사이에 공백 1개나 아예없으면 왜 통과가 안되지?
bool solution(string s)
{
    bool answer = true;

    int count1{}, count2{};
    for (const char& ch : s)
    {
        if (ch == 'p' || ch == 'P')
        {
            ++count1;
        }
        if (ch == 'y' || ch == 'Y')
        {
            ++count2;
        }
    }

    if (count1 != count2)
    {
        answer = false;
    }


    return answer;
}