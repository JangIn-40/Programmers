#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> rank, vector<bool> attendance)
{
	int answer = 0;

	vector<int> temp;
	for (int i = 0; i < attendance.size(); ++i)
	{
		if (attendance[i])
			temp.push_back(i);
	}

	for (int i = 0; i < temp.size() - 1; ++i)
	{
		for (int j = i + 1; j < temp.size(); ++j)
		{
			if (rank[temp[i]] > rank[temp[j]])
				std::swap(temp[i], temp[j]);
		}
	}

	answer = temp[0] * 10000 + 100 * temp[1] + temp[2];

	return answer;
}

int main()
{
	solution({ 3, 7, 2, 5, 4, 6, 1 }, { false, true, true, true, true, false, false });
}