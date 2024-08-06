#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

// 제한사항으로 && uMap[temp] 불필요
int solution(vector<string> babbling)
{
    int answer = 0;
    unordered_map<string, bool> uMap{ {"aya", true}, {"ye", true}, {"woo", true}, {"ma", true} };


    for (const string& str : babbling)
    {
        string temp;
        for (const char& ch : str)
        {
            temp += ch;

            if (uMap.find(temp) != uMap.end() && uMap[temp])
            {
                uMap[temp] = false;
                temp.clear();
            }
        }

        if (temp.empty())
        {
            ++answer;
        }

        for (auto& pair : uMap)
        {
            pair.second = true;
        }
    }

    return answer;
}

int main()
{
    solution({ "ayaye", "uuuma", "ye", "yemawoo", "ayaa" });
}