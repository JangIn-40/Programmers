#include <string>
#include <vector>
#include <iostream>
#include <limits>
using namespace std;

// 굳이 int로 안바꿔도 된다
int solution(string number)
{
	int answer = 0;

	for (int i = 0; i < number.size(); ++i)
	{
		answer += number[i] - '0';
	}

	return answer % 9;
}

int main()
{
	std::cout << solution("78720646226947352489");
}