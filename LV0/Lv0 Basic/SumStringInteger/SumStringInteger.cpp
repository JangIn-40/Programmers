#include <string>
#include <vector>

using namespace std;

// char���� ��ȯ�ϴ� �Լ��� �ִ�
// atoi, atof, atol
int solution(string num_str)
{
	int answer = 0;

	for (const auto &e : num_str)
		answer += e - '0';
	
	return answer;
}