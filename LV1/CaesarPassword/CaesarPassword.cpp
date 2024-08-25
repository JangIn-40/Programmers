#include <string>
#include <vector>
#include <iostream>
using namespace std;

// TODO: 주석 처리한 코드가 더 좋은듯
string solution(string s, int n)
{
    string answer = "";

    for (char& ch : s)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = (ch + n) % ('z' + 1);
            if (ch < 'a')
            {
                ch += 'a';
            }
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = (ch + n) % ('Z' + 1);
            if (ch < 'A')
            {
                ch += 'A';
            }
        }
        cout << s << endl;
    }

    answer = s;
    return answer;
}

//string solution(string s, int n)
//{
//    string answer = "";
//
//    for (int i = 0; i < s.length(); i++)
//    {
//        if (s[i] == ' ')
//        {
//            answer += s[i];
//        }
//        else
//        {
//            int start = (s[i] >= 'a') ? 'a' : 'A';
//            answer += start + (s[i] - start + n) % 26;
//        }
//    }
//
//    return answer;
//}

int main()
{
    solution("a B z", 4);
}