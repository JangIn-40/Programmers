#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> solution(vector<string> strArr)
{
	vector<string> answer;

	int count{};
	for (const auto &e : strArr)
	{
		if (e.find("ad") == e.npos)
			answer.push_back(e);
	}

	return answer;
}

int main()
{
	solution({ "and","notad","abcd" });
}