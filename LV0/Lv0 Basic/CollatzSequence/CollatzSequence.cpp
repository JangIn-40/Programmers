#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int n)
{
	vector<int> answer;

	while (n != 1)
	{
		answer.push_back(n);
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = 3 * n + 1;
		}
	}

	answer.push_back(n);
	return answer;
}

int main()
{
	auto e = solution(10);

	for (const auto &i : e)
	{
		std::cout << i << " ";
	}
}