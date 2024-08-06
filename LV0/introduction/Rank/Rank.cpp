#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<vector<int>> score)
{
	vector<int> answer;
	vector<float> average;

	for (const auto& vec : score)
	{
		int sum{};
		for (const auto& num : vec)
		{
			sum += num;
		}
		average.emplace_back((float)sum / 2);
	}

	answer.resize(average.size(), 1);
	for (int i = 0; i < average.size(); ++i)
	{
		float compareNum = average[i];
		for (int j = 0; j < average.size(); ++j)
		{
			if (compareNum < average[j] && i != j)
			{
				++answer[i];
			}
		}
	}

    for (const int& num : answer)
    {
        cout << num << " ";
    }
	return answer;
}

int main()
{
    solution({ {1, 3}, {3, 1}, {2, 3}, {3, 2}, {1, 2}, {0, 0} });
}