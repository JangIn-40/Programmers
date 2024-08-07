#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db)
{
	string answer = "";

	for (const auto& login : db)
	{
		if (login[0] == id_pw[0])
		{
            if (login[1] == id_pw[1])
            {
                answer = "login";
                break;
            }
            else
            {
                answer = "wrong pw";
                break;
            }
		}
		else
		{
			answer = "fail";
		}
	}

	return answer;
}