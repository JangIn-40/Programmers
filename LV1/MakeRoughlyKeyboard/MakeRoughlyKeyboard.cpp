#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int FindTargets(const string& target, const multimap<char, int>& mm)
{
	int sum{};
	for (int j = 0; j < target.size(); ++j)
	{
		auto iter = mm.equal_range(target[j]);
		if (iter.first == iter.second)
		{
            return -1;
		}
		else
		{
            int min{ 101 };
            for (auto it = iter.first; it != iter.second; ++it)
            {
                if (min > it->second)
                {
                    min = it->second;
                }
            }
            sum += min;
		}
	}

    return sum;
}

vector<int> solution(vector<string> keymap, vector<string> targets)
{
	vector<int> answer;

	multimap<char, int> mm;
	for (int i = 0; i < keymap.size(); ++i)
	{
		for (int j = 0; j < keymap[i].size(); ++j)
		{
			mm.emplace(keymap[i][j], j + 1);
		}
	}

	for (int i = 0; i < targets.size(); ++i)
	{
        answer.emplace_back(FindTargets(targets[i], mm));
	}

	return answer;
}

int main()
{
    solution({ "BC" }, { "AC", "BC" });
}