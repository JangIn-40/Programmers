#include <string>
#include <vector>

using namespace std;

// std::fill이라는 함수도 있음
string solution(string phone_number) 
{
    string answer = "";

    phone_number.replace(0, phone_number.size() - 4, phone_number.size() - 4, '*');

    answer = phone_number;
    return answer;
}