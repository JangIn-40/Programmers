#include <string>
#include <vector>

using namespace std;

// atoi와 stoi 모두 문자열을 변환하는것임 단일문자변환이 아님
int solution(string my_string)
{
	int answer = 0;

	for (const auto &e : my_string)
	{
		if (e >= '0' && e <= '9')
			answer += e - '0';
	}

	return answer;
}