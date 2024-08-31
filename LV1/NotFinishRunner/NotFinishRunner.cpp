#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    string answer = "";
    unordered_map<string, int> finishRunner;

    for (const string& str : completion)
    {
        ++finishRunner[str];
    }

    for (const string& str : participant)
    {
        if (--finishRunner[str] < 0)
        {
            answer = str;
            break;
        }
    }

    return answer;
}