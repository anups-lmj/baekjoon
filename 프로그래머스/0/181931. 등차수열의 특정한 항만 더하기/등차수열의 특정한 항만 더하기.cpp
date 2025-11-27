#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    for(int i=0;i<included.size();i++)
    {
        int sum=a+i*d;
        if(included[i])
            answer += sum;
        
    }
    return answer;
}