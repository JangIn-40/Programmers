#include <string>
#include <vector>
#include <set>
#include <iostream>
using namespace std;

string solution(string s, string skip, int index)
{
    string answer = "";
    set<char> skipAlphabet;

    for (const char& ch : skip)
    {
        skipAlphabet.insert(ch);
    }

    for (char& ch : s)
    {
        for (int i = 0; i < index; ++i)
        {
            ++ch;
            if (ch > 'z')
            {
                ch = ch - 'z' + 'a' - 1;
                cout << "change: " << ch << endl;
            }

            cout << "out while: " << (char)ch << endl;
            while (skipAlphabet.find(ch) != skipAlphabet.end())
            {
                ++ch;
                if (ch > 'z')
                {
                    ch = ch - 'z' + 'a' - 1;
                    cout << "change: " << ch << endl;
                }
                cout << "in while: " << ch << endl;
            }
        }

        cout << "origin: " << ch << endl;

    }

    answer = s;
    return answer;
}

int main()
{
    cout << solution("yyyyy", "za", 2);
}