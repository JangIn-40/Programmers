#include <string>
#include <vector>

using namespace std;

string solution(int age)
{
	string answer = "";

	int digit{ 1 }, temp = age;
	while (temp >= 10)
	{
		temp /= 10;
		digit *= 10;
	}

	while (digit)
	{
		answer += char(age / digit) + 'a';
		age %= digit;
		digit /= 10;
	}

	return answer;
}

int main()
{
	solution(23);
}