#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers)
{
	int answer = max(numbers[0], numbers[1]);
	int second = min(numbers[0], numbers[1]);

	for (int i = 2; i < numbers.size(); ++i)
	{
		if (numbers[i] > answer)
		{
			second = answer;
			answer = numbers[i];
		}
		else if(numbers[i] > second && numbers[i] != answer)
		{
			second = numbers[i];
		}
	}
	
	answer *= second;
	return answer;
}

int main()
{
	solution({ 0, 31, 24, 10, 1, 9 });
}