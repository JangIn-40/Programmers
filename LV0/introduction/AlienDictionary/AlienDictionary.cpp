#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<string> spell, vector<string> dic)
{
    int answer = 2;
    int spellSize = spell.size();
    unordered_map<string, bool> spellUse;
    for (const string& str : spell)
    {
        spellUse[str] = false;
    }
    unordered_map<string, bool> temp = spellUse;

    for (const string& str : dic)
    {
        for (int i = 0; i < str.size(); ++i)
        {
            string key;
            key = str[i];
            if (spellUse.find(key) != spellUse.end())
            {
                spellUse[to_string(str[i])] = true;
            }
        }

        int count = 0;
        for (const auto& use : spellUse)
        {
            if (use.second)
            {
                ++count;
            }
        }

        if (count == spellSize)
        {
            answer = 1;
            break;
        }
        spellUse = temp;
    }

    return answer;
}

int main()
{
    solution({ "z", "d", "x" }, { "def", "dww", "dzx", "loveaw" });
}