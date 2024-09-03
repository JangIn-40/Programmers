#include <string>
#include <map>

using namespace std;

int solution(string s) {
    string answer = "";
    map<string, char> number_string_pair = {
        {"zero", '0'},
        {"one", '1'},
        {"two", '2'},
        {"three", '3'},
        {"four", '4'},
        {"five", '5'},
        {"six", '6'},
        {"seven", '7'},
        {"eight", '8'},
        {"nine", '9'}
    };

    string temp;
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            answer += s[i];
            temp.clear();
        }
        else {
            temp += s[i];
            if (number_string_pair[temp] != 0) {
                answer += number_string_pair[temp];
                temp.clear();
            }
        }
    }


    return stoi(answer);
}

int main()
{
    solution("one4seveneight");
}