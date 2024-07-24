#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
	int answer = 0;

	s += ' ';
	int num{}, prev{};
	bool isNegative{};
	for (const auto &e : s)
	{
		if (e == ' ')
		{
			num /= 10;
			if (isNegative)
				num = -num;

			answer += num;
			prev = num;
			num = 0;
			isNegative = false;
		}
		else if (e == 'Z')
		{
			answer -= prev;
		}
		else if (e == '-')
		{
			isNegative = true;
		}
		else
		{
			num += e - '0';
			num *= 10;
		}
	}

	return answer;
}

int main()
{
	solution("-1 -2 -3 Z");
}