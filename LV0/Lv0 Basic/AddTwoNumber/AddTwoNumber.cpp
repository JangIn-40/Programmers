#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// TODO: 한번 다시 보기
// 내가 한것이 아님..
string solution(string a, string b)
{
	string answer = "";

	int carry{};
	int i = a.size() - 1, j = b.size() - 1;

	while (i >= 0 || j >= 0 || carry)
	{
		int sum = carry;
		if (i >= 0) sum += a[i--] - '0';
		if (j >= 0) sum += b[j--] - '0';

		carry = sum / 10;
		sum %= 10;

		answer.push_back(sum + '0');
	}

	reverse(answer.begin(), answer.end());
	return answer;
}

int main()
{
	solution("18446744073709551615", "287346502836570928366");
}