#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query)
{
	vector<int> answer;

	for (int i = 0; i < query.size(); ++i)
	{
		if (i % 2 == 0)
		{
			arr.erase(arr.begin() + query[i] + 1, arr.end());
		}
		else
		{
			arr.erase(arr.begin(), arr.begin() + query[i]);
		}
	}

	answer = arr;
	return answer;

}

int main()
{
	auto e = solution({ 0, 1, 2, 3, 4, 5 }, { 4, 1, 2 });

	for (auto &i : e)
	{
		std::cout << i << " ";
	}

}