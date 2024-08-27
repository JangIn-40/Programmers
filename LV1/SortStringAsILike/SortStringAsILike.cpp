#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// 람다함수 어렵다
vector<string> solution(vector<string> strings, int n)
{
    vector<string> answer;

    sort(strings.begin(), strings.end(), [&](string a, string b)
        {
            if (a[n] == b[n])
            {
                return a < b;
            }

            return a[n] < b[n];
        }
    );
        
    answer = strings;
    return answer;
}

int main()
{
    auto str = solution({ "sun", "bed", "car" }, 1);
    for (const auto& e : str)
    {
        cout << e << endl;
    }
}