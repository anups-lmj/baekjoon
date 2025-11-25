#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";
    for(int i=0; i<10;i++)
    {
        if(str1[i]==0 & str2[i]==0)
            break;
        answer.push_back(str1[i]);
        answer.push_back(str2[i]);
        
    }
    return answer;
}