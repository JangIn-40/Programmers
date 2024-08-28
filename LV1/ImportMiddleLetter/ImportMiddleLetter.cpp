#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{
    string answer = "";

    int n = s.size();
    n & 1 ? answer = s[n / 2] : answer = string{ s[n / 2 - 1] } + string{ s[n / 2] };

    return answer;
}