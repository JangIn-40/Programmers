#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2)
{
	string answer = "";

	std::swap(my_string[num1], my_string[num2]);

	return answer;
}