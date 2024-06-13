#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n)
{
	int answer = 0;
	if (n % 2)
	{
		while (n >= 0)
		{
			answer += n;
			n -= 2;
		}
	}
	else
	{
		while (n >= 0)
		{
			answer += n * n;
			n -= 2;
		}
	}
	
	return answer;
}

int main()
{
	cout << solution(10);
}