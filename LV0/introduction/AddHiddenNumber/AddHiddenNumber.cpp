#include <string>
#include <vector>

using namespace std;

// atoi�� stoi ��� ���ڿ��� ��ȯ�ϴ°��� ���Ϲ��ں�ȯ�� �ƴ�
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