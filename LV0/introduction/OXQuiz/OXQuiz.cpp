#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

// stringstream ����غ� stringstream����ҽ� �� �����÷��׸� �ʱ�ȭ�ؾ���
vector<string> solution(vector<string> quiz)
{
	vector<string> answer;
	stringstream ss;

	for (const auto &str : quiz)
	{
		ss.str(str);
		int num1, num2, num3, sum;
		char ch1, ch2;
		while (!ss.eof())
		{
			ss >> num1 >> ch1 >> num2 >> ch2 >> num3;
			ch1 == '+' ? sum = num1 + num2 : sum = num1 - num2;
		}
		sum == num3 ? answer.push_back("O") : answer.push_back("X");
		ss.clear();
	}

	return answer;
}

int main()
{
	solution({ "19 - 6 = 13", "5 + 66 = 71", "5 - 15 = 63", "3 - 1 = 2" });
}