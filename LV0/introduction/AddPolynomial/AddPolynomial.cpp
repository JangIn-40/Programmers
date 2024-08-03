#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string polynomial)
{
	string answer = "";
	bool haveX{};
	int num{}, zeroCoefficient{}, oneCoefficient{};

	for (const char& ch : polynomial)
	{
		if (ch == '+')
		{
			haveX == true ? oneCoefficient += num / 10 : zeroCoefficient += num / 10;
			haveX = false;
			num = 0;
		}
		else if (ch <= '9' && ch >= '0')
		{
			num = (num + ch - '0') * 10;
		}
		else if (ch == 'x')
		{
			num == 0 ? num = 10 : num = num;
			haveX = true;
		}
	}
    haveX == true ? oneCoefficient += num / 10 : zeroCoefficient += num / 10;

	if (oneCoefficient == 1)
	{
		if (zeroCoefficient)
		{
			answer = "x + " + to_string(zeroCoefficient);
		}
		else
		{
			answer = "x";
		}
	}
	else if (oneCoefficient)
	{
		if (zeroCoefficient)
		{
			answer = to_string(oneCoefficient) + "x + " + to_string(zeroCoefficient);
		}
		else
		{
			answer = to_string(oneCoefficient) + "x";
		}
	}
	else
	{
		answer = to_string(zeroCoefficient);
	}
	return answer;
}

int main()
{
	cout << solution("x + x + x");
}