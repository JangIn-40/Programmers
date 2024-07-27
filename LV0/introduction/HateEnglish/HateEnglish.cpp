#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

long long solution(string numbers)
{
	long long answer = 0;
	unordered_map<string, int> num{
		{ "zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
		{"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}
	};
	string comp;

	for (const auto &ch : numbers)
	{
		if (num.find(comp) != num.end())
		{
			answer = (answer * 10) + num[comp];
			comp.clear();
			comp.push_back(ch);
		}
		else
			comp.push_back(ch);
	}
	answer = (answer * 10) + num[comp];

	return answer;
}

int main()
{
	solution("onetwothreefourfivesixseveneightnine");
}