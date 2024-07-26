#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n)
{
	int answer = array[0];

	int temp{ n };
	for (const auto &e : array)
	{
		int diff = abs(e - n);
		if (diff < temp)
		{
			temp = diff;
			answer = e;
		}
		else if (diff == temp)
		{
			answer = answer > e ? e : answer;
		}
	}

	return answer;
}

int main()
{
	solution({ 2, 3, 4 }, 1);
}