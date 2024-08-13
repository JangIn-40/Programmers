#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(string s)
{
	vector<int> answer;
    unordered_map<char, int> mapLocation;

    for (int i = 0; i < s.size(); ++i)
    {
        if (mapLocation.find(s[i]) != mapLocation.end())
        {
            answer.emplace_back(i - mapLocation[s[i]]);
            mapLocation[s[i]] = i;
        }
        else
        {
            mapLocation[s[i]] = i;
            answer.emplace_back(-1);
        }
    }

	return answer;
}