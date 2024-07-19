#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<string> strArr)
{
	int answer = 0;

	vector<int> count(31);
	for (const auto &e : strArr)
	{
		++count[e.size()];
	}

	for (const auto &e : count)
	{
		if (e > answer)
			answer = e;
	}

	return answer;
}

int main()
{
	solution({ "a","bc","d","efg","hi" });
}