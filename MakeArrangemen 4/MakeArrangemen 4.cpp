#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> stk;
	int i{};

	while(i < arr.size())
	{
		if (stk.empty())
		{
			stk.push_back(arr[i]);
			++i;
		}
		else if(stk.back() < arr[i])
		{
			stk.push_back(arr[i]);
			++i;
		}
		else
		{
			stk.pop_back();
		}
	}
	return stk;
}

int main()
{
	auto e = solution({ 1, 4, 2, 5, 3 });
	for (const auto &i : e)
	{
		std::cout << i << std::endl;
	}
}
