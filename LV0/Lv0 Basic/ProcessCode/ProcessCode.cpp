#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string code)
{
	string answer = "";
	bool mode{};

	for (int idx{}; idx < code.length(); ++idx)
	{
		if (code[idx] == '1')
		{
			mode = !mode;
			continue;
		}
			
		if (mode && (idx % 2 != 0))
		{
			answer += code[idx];
		}
		else if (!mode && (idx % 2 == 0))
		{
			answer += code[idx];
		}
	}

	if (answer == "")
	{
		return answer = "EMPTY";
	}

	return answer;
}

int main()
{
	std::cout << solution("abc1abc1abc");
}