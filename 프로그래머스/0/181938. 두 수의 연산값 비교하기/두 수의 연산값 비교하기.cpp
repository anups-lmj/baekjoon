#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string sum_ab, mul_2ab;
    sum_ab = to_string(a)+to_string(b);
    mul_2ab = to_string(2*a*b);
    if(stoi(sum_ab)>=stoi(mul_2ab))
        answer = stoi(sum_ab);
    else
        answer = stoi(mul_2ab);
    return answer;
}