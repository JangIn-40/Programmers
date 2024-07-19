#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(string myString)
{
	vector<int> answer;

	int start{}, end{};
	while (myString.find('x', start) != myString.npos)
	{
		end = myString.find('x', start);
		answer.push_back(end - start);
		start = end + 1;
	}

	if (start <= myString.size())
	{
		answer.push_back(myString.size() - start);
	}

	return answer;
}

int main()
{
	solution("oxooxoxxox");
}