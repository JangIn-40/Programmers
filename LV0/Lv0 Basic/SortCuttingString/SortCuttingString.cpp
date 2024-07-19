#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<string> solution(string myString)
{
	vector<string> answer;

	int start{}, end{};
	while (myString.find('x', start) != myString.npos)
	{
		end = myString.find('x', start);
		if(end != start)
			answer.push_back(myString.substr(start, end - start));
		start = end + 1;
	}

	if (start < myString.size())
	{
		answer.push_back(myString.substr(start, end - start));
	}

	std::sort(answer.begin(), answer.end());
	return answer;
}

int main()
{
	auto ele = solution("axxbxx");

	for (auto &e : ele)
	{
		std::cout << e << std::endl;
	}
}