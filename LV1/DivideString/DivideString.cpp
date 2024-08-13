#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string s)
{
    int answer = 0;

    int num1, num2, temp{ -1 };
    char x;
    for (int i = 0; i < s.size(); ++i)
    {
        if (temp != answer)
        {
            temp = answer;
            x = s[i];
            num1 = 1;
            num2 = 0;
        }
        else 
        {
            if (x != s[i])
            {
                ++num2;
            }
            else
            {
                ++num1;
            }

            if (num1 == num2)
            {
                ++answer;
                num1 = 0;
                num2 = 0;
            }
        }
    }

    if (num1 != num2)
    {
        ++answer;
    }

    return answer;
}

int main()
{
    cout << solution("abracadabra");
}