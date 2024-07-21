#include <string>
#include <vector>

using namespace std;

// rotate라는 함수도 있다
vector<int> solution(vector<int> numbers, string direction)
{
	vector<int> answer;

	if (direction == "right")
	{
		int temp = numbers[numbers.size() - 1];
		for (int i = numbers.size() - 1; i > 1; --i)
		{
			numbers[i] = numbers[i - 1];
		}
		numbers[0] = temp;
	}
	else
	{
		int temp = numbers[0];
		for (int i = 0; i < numbers.size() - 1; ++i)
		{
			numbers[i] = numbers[i + 1];
		}
		numbers[numbers.size() - 1] = temp;
	}

	answer = numbers;
	return answer;
}