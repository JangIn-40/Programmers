#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter)
{
	string answer = "";

	while(my_string.find(letter) != my_string.npos)
		my_string.erase(my_string.find(letter), letter.size());

	answer = my_string;
	return answer;
}

int main()
{
	solution("BCBdbe", "B");
}