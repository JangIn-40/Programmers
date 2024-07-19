#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> arr)
{
	string answer = "";

	for (const string &c : arr)
	{
		answer += c;
	}

	return answer;
}

int main()
{
	vector<string> arr{ "a", "b", "c" };
	cout << solution(arr);
}