#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

// TODO: 내가 푼 것이 아님 이해하고 넘어갈것
int solution(vector<vector<int>> lines) 
{
    int answer = 0;
    unordered_map<int, int> m;

    for (const auto& line : lines)
    {
        for (int i = line[0]; i < line[1]; ++i)
        {
            ++m[i];
        }
    }

    for (const auto& pair : m)
    {
        if (pair.second > 1)
        {
            ++answer;
        }
    }

    return answer;
}

int main()
{
	cout << solution({ {0, 5}, {3, 9}, {1, 10} });
}