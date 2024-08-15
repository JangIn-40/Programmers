#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

int solution(vector<string> babbling)
{
    int answer = 0;
    unordered_map<string, int> uM{ {"aya", 1}, {"ye", 2}, {"woo", 3}, {"ma", 4} };

    for (string& say : babbling)
    {
        string temp;
        int comp{};
        for (char& word : say)
        {
            temp += word;
            if (uM.find(temp) != uM.end() && uM[temp] != comp)
            {
                comp = uM[temp];
                temp.clear();
            }
        }

        if (temp.empty())
        {
            ++answer;
        }
    }


    return answer;
}

int main()
{
    solution({ "aya", "yee", "u", "maa" });
}