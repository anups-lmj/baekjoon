#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string sum_a, sum_b;
    sum_a= to_string(a)+to_string(b);
    sum_b = to_string(b)+to_string(a);
    if(sum_a>=sum_b)
        answer = stoi(sum_a);
    else
        answer = stoi(sum_b);
    return answer;
}