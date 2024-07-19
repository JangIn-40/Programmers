#include <string>
#include <vector>

using namespace std;

// O(log n)까지 줄이는 방법 있음
int solution(int n)
{
	int answer = 0;

	for (int i = 1; i < n + 1; ++i)
	{
		if (n % i == 0)
			++answer;
	}

	return answer;
}

int main()
{
	solution(20);
}