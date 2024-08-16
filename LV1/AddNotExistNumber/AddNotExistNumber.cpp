#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) 
{
	int answer = 0;

    for (int i = 1; i <= 9; ++i)
    {
        answer += i;
    }

    for (const int& num : numbers)
    {
        answer -= num;
    }

	return answer;
}