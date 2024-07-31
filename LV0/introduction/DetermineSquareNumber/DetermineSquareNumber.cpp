#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
	int answer = 0;

	n == (int)sqrt(n) * (int)sqrt(n) ? answer = 1 : answer = 2;

	return answer;
}
