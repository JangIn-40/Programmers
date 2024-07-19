#include <string>
#include <vector>
#include <iostream>
using namespace std;

// my_string[i] - 'G'이것보다 my_string[i] - 'a' + 26이 더 보기 좋은듯하다
vector<int> solution(string my_string)
{
	vector<int> answer(52, 0);

	for (int i = 0; i < my_string.size(); ++i)
	{
		if (my_string[i] <= 'Z')
		{
			answer[my_string[i] - 'A']++;
		}
		else
		{
			answer[my_string[i] - 'G']++;
		}
	}

	return answer;
}

int main()
{
	auto sol = solution("Programmers");

	for (auto &e : sol)
	{
		std::cout << e << " ";
	}
}