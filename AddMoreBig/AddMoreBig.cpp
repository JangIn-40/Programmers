#include <string>
#include <vector>
#include <iostream>

using namespace std;

// to_string : 숫자를 string타입으로
// stoi : string to int
// stof : string to float
// stod : string to double
// 자신이 무엇을 모르는지 확실히 아는게 중요함
int solution(int a, int b) {
	int answer = 0;
	
	string str1 = to_string(a);
	string str2 = to_string(b);

	if (str1 + str2 < str2 + str1)
	{
		answer = stoi(str2 + str1);
	}
	else
	{
		answer = stoi(str1 + str2);
	}
	
	return answer;
}

int main()
{
	cout << solution(89, 98);
}