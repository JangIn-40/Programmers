#include <string>
#include <vector>
#include <iostream>
using namespace std;

// (n % 5 != 0)이 아닌 (n % 10 != 5 && n % 10 != 0)이 더 효율적인듯
bool Divide(int n)
{
	if (n == 0)
		return true;
	else if (n % 5 != 0)
	{
		return false;
	}
	return Divide(n / 10);
}

vector<int> solution(int l, int r)
{
	vector<int> answer;

	for (int i = l; i <= r; ++i)
	{
		if (i % 5 == 0 && Divide(i))
		{
			answer.push_back(i);
		}
	}

	if (answer.empty())
	{
		answer.push_back(-1);
	}
		
	return answer;
}

int main()
{
	auto e = solution(5, 555);

	for (const auto &f : e)
	{
		std::cout << f << std::endl;
	}
}