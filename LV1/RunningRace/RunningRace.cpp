#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <iostream>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings)
{
	vector<string> answer;
	unordered_map<string, int> player;
	map<int, string> rank;

	for (int i = 0; i < players.size(); ++i)
	{
		player[players[i]] = i + 1;
		rank[i + 1] = players[i];
	}

	for (const string& call : callings)
	{
        int grade = --player[call];
        string name = rank[grade];
        rank[grade] = call;
		int grade2 = ++player[name];
        rank[grade2] = name;
	}

    for (const auto& pair : rank)
    {
        answer.push_back(pair.second);
    }
	return answer;
}

int main()
{
	solution({ "mumu", "soe", "poe", "kai", "mine" }, { "kai", "kai", "mine", "mine" });
}