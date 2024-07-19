#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(string letter)
{
	string answer = "";
	unordered_map<string, char> morseCode
	{ {".-", 'a'}, {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'}, {".", 'e'}, {"..-.", 'f'},
		{"--.", 'g'}, {"....", 'h'}, {"..", 'i'}, {".---", 'j'}, {"-.-", 'k'}, {".-..", 'l'},
		{"--", 'm'}, {"-.", 'n'}, {"---", 'o'}, {".--.", 'p'}, {"--.-", 'q'}, {".-.", 'r'},
		{"...", 's'}, {"-", 't'}, {"..-", 'u'}, {"...-", 'v'}, {".--", 'w'}, {"-..-", 'x' },
		{"-.--", 'y'}, {"--..", 'z'} };

	string temp;
	for (const auto &e : letter)
	{
		if (e == ' ')
		{
			answer += morseCode[temp];
			temp.clear();
		}
		else
			temp += e;
	}

	answer += morseCode[temp];
	return answer;
}