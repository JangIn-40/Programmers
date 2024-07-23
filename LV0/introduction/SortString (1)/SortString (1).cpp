#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(string my_string)
{
	vector<int> answer;

	for (const auto &e : my_string)
	{
		if (e < 'A')
			answer.push_back(e - '0');
	}
	sort(answer.begin(), answer.end());

	return answer;
}

int main()
{
	std::cout << (int)'A' << " " << int('1') << std::endl;
}