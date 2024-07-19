#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b) {
	int answer = 0;

	string str1 = to_string(a);
	string str2 = to_string(b);

	int comp1 = 2 * a * b;
	answer = stoi(str1 + str2);
	if (comp1 > answer)
	{
		answer = comp1;
	}

	return answer;
}

int main()
{
	std::cout << solution(2, 91);
}