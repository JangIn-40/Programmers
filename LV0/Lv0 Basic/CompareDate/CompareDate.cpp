#include <string>
#include <vector>

using namespace std;

// c++ �����ε����� �迭��ü�� ���Ҽ� ����
int solution(vector<int> date1, vector<int> date2)
{
	int answer = 0;

	if (date1 < date2)
		answer = 1;
	
	return answer;
}
