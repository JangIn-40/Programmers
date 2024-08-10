#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo)
{
    vector<int> answer;
    unordered_map<string, int> yearningPoint;

    for (int i = 0; i < name.size(); ++i)
    {
        yearningPoint[name[i]] = yearning[i];
    }

    for (const auto& sheet : photo)
    {
        int sum{};
        for (const string& person : sheet)
        {
            sum += yearningPoint[person];
        }
        answer.push_back(sum);
    }
    return answer;
}