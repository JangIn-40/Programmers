#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> num_list, int n)
{
	vector<int> answer;

	num_list.erase(num_list.begin(), num_list.begin() + n - 1);

	answer = num_list;
	return answer;
}

int main()
{
	auto e = solution({ 5, 2, 1, 7, 5 }, 2);
}