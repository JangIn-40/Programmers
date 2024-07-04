#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string myString, string pat)
{
	string answer = "";

	int f = myString.find(pat), s{};
	while (f != myString.npos)
	{
		s = f;
		f = myString.find(pat, f + pat.size());
	}

	answer.assign(myString.begin(), myString.begin() + s + pat.size());
	return answer;
}

int main()
{
	std::cout << solution("AbCdEFG", "dE");
}