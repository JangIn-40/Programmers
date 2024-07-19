#include <string>
#include <vector>

using namespace std;

// char형도 변환하는 함수가 있다
// atoi, atof, atol
int solution(string num_str)
{
	int answer = 0;

	for (const auto &e : num_str)
		answer += e - '0';
	
	return answer;
}