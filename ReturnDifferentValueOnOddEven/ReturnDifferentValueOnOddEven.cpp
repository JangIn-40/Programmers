#include <string>
#include <vector>
#include <iostream>

using namespace std;

void sub(int n, int &sum)
{
	if (n <= 0)
		return;
	else
	{
		sum += n;
		sub(n - 2, sum);
	}
}

void multiple(int n, int &sum)
{
	if (n <= 0)
		return;
	else
	{
		sum += n * n;
		multiple(n - 2, sum);
	}
}

// 재귀함수도 사용하고 while도 사용해봤는데 어떤게 더 좋은지 잘 모르겠다
// 재귀함수는 직관성이 높지만 속도가 느릴 수 있고
// while문은 재귀함수보다 속도가 높지만 직관성이 떨어질 수 있다.
int solution(int n)
{
	int answer = 0;
	if (n % 2)
	{
		sub(n, answer);
	}
	else
	{
		multiple(n, answer);
	}
	
	return answer;
}

int main()
{
	cout << solution(10);
}