#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string n_str)
{
	string answer = "";

	bool notZero{};
	for (const auto &e : n_str)
	{
		if (e != '0')
			notZero = true;

		if (notZero)
			answer.push_back(e);
	}

	return answer;
}

int main()
{
	solution("0010");
}