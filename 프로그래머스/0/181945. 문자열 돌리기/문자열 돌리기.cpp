#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(int i=0;i<10;i++)
    {
        if(str[i]==0)
            break;
        cout<<str[i]<<endl;
        
    }
    return 0;
}