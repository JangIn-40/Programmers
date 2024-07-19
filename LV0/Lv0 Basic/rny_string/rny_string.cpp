#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string rny_string)
{
	string answer = "";

	for (int i = 0; i < rny_string.size(); ++i)
	{
		if (rny_string[i] == 'm')
		{
			rny_string.erase(rny_string.begin() + i, rny_string.begin() + i + 1);
			rny_string.insert(i, "rn");
		}
	}

	answer = rny_string;
	return answer;
}

int main()
{
	std::cout << solution("masterpiece");
}