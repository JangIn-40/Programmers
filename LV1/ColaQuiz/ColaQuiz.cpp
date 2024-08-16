#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int a, int b, int n)
{
	int answer = 0;
	int remain{};

	while (n)
	{
		remain += n % a;
		n = n / a * b;
		if (remain / a)
		{
			n += remain / a * b;
			remain %= a;
		}

		answer += n;

		
		cout << "remain: " << remain << " n: " << n << " answer: " << answer << endl;
	}

	return answer;
}

int main()
{
	solution(3, 2, 20);
}