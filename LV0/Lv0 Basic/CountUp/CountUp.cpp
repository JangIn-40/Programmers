#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int start_num, int end_num)
{
	vector<int> answer;

	for (start_num; start_num <= end_num; start_num++)
	{
		answer.push_back(start_num);
	}

	return answer;
}

int main()
{
	auto e = solution(3, 10);

	for (const auto i : e)
	{
		std::cout << i << std::endl;
	}
}