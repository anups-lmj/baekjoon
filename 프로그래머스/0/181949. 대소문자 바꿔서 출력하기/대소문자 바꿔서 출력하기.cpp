#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for(int i = 0; i<20; i++)
    {
        if(str[i] >= 'a' & str[i] <= 'z')
        {
            str[i] = str[i] - ('a'-'A');
        }
        else if(str[i]>='A' & str[i]<='Z')
        {
            str[i] = str[i] + ('a'-'A');
        }
    }
    cout<<str;
    return 0;
}