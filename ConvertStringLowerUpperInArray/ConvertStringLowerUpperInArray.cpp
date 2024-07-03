#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> solution(vector<string> strArr) 
{
    vector<string> answer;

    for (int i = 0; i < strArr.size(); ++i)
    {
        if (i & 1)
        {
            for (auto &e : strArr[i])
            {
                e = std::toupper(e);
            }
        }
        else
        {
            for (auto &e : strArr[i])
            {
                e = std::tolower(e);
            }
        }
    }

    answer = strArr;
    return answer;
}

int main()
{
    solution({ "AAA","BBB","CCC","DDD" });
}