#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b, bool flag)
{
	int answer = 0;

	answer = flag ? a + b : a - b;

	return answer;
}

int main()
{
	std::cout << solution(-4, 7, false);
}