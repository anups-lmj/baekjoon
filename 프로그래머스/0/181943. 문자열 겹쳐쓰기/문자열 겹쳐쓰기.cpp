#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    for(int i =0;i<1000;i++)
    {
        if(my_string[i]==0)
            break;
        answer.push_back(my_string[i]);
        if(i==s)
        {
            answer.pop_back();
            for(int j=0;j<1000;j++)
            {
                if(overwrite_string[j]==0)
                    break; 
                answer.push_back(overwrite_string[j]);
                i++;
            }
            i--;
        }
        
    }
    return answer;
}