#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l)
{
	vector<int> answer;

	for (int i = 0; i < intStrs.size(); ++i)
	{
		int temp{};
		for (int j = s; j < l + s; ++j)
		{
			temp *= 10;
			temp += intStrs[i][j] - '0';
		}
		if (temp > k)
		{
			answer.push_back(temp);
		}
		
		for (auto &e : answer)
		{
			cout << e << endl;
		}
	}

	return answer;
}

int main()
{
	solution({ "0123456789", "9876543210", "9999999999999" }, 50000, 5, 5);
}