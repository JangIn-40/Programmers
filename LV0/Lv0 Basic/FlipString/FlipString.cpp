#include <string>
#include <vector>
#include <iostream>
using namespace std;

// reverse와 foreach문으로 코드 확줄일 수 있구나...
string solution(string my_string, vector<vector<int>> queries)
{
	string answer = "";

	for (int i = 0; i < queries.size(); ++i)
	{
		for (int j = queries[i][0], k = queries[i][1]; 
			j <= (queries[i][1] + queries[i][0]) / 2; ++j, --k)
		{
			char temp = my_string[j];
			my_string[j] = my_string[k];
			my_string[k] = temp;
		}
	}
	answer = my_string;
	
	return answer;
}

int main()
{
	std::cout << solution("rermgorpsam", { {2, 3}, {0, 7}, {5, 9}, {6, 10} });	
}