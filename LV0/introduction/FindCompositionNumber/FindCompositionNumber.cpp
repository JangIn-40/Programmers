#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
	int answer = 0;

	int count{};
	while (n > 3)
	{
		for (int i = n; i > 0; --i)
		{
			if (count >= 3)	break;
			if (n % i == 0) ++count;
		}
		
		if (count >= 3) ++answer;

		count = 0;
		--n;
	}

	return answer;
}