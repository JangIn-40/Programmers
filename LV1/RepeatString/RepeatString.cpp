#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int n) 
{
    string answer = "";

    for (int i = 0; i < n - 1; i += 2)
    {
        answer += "수박";
    }

    if (n & 1)
    {
        answer += "수";
    }

    return answer;
}

int main()
{
     cout << solution(3);
}