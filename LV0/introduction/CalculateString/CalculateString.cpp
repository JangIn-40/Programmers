#include <string>
#include <vector>
#include <stack>
using namespace std;

// stringstream을 알아야하나?
int solution(string my_string)
{
	int answer = 0;
	int num1{}, num2{};
	char operate;
	bool isFirst{true};

	for (const auto &ch : my_string)
	{
		if (isFirst)
		{
			if (ch >= '0' && ch <= '9')
			{
				num1 = (num1 + ch - '0') * 10;
			}
			else if (ch == '+' || ch == '-')
			{
				operate = ch;
				isFirst = false;
			}
		}
		else
		{
			if (ch >= '0' && ch <= '9')
			{
				num2 = (num2 + ch - '0') * 10;
			}
			else if (ch == '+' || ch == '-')
			{
				operate == '+' ? num1 = num1 + num2 : num1 = num1 - num2;
				num2 = 0;
				operate = ch;
			}
		}
	}

	operate == '+' ? num1 = num1 + num2 : num1 = num1 - num2;
	answer = num1 / 10;
	return answer;
}

int main()
{
	solution("71 - 40 - 322");
}