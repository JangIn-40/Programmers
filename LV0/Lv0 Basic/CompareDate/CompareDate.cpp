#include <string>
#include <vector>

using namespace std;

// c++ 오버로딩으로 배열자체를 비교할수 있음
int solution(vector<int> date1, vector<int> date2)
{
	int answer = 0;

	if (date1 < date2)
		answer = 1;
	
	return answer;
}
