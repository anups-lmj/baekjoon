#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(void)
{
    int N;
    string str;
    //getline(cin,str);
    //cout<<str<<endl;
    queue<int> st;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int num;
        cin>>str;
        //cout<<str<<endl;
        //cout<<"i : "<< i<<endl;
        if(str == "push")
        {
            cin>>num;
            st.push(num);
            //cout<<str<<endl;
        }
        if(str == "front")
        {
            if(st.empty())
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<st.front()<<endl;
            }
        }
        if(str=="back")
        {
            if(st.empty())
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<st.back()<<endl;
            }
        }
        if(str == "empty")
        {
            cout<<st.empty()<<endl;
        }
        if(str == "pop")
        {
            if(st.empty()==1)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<st.front()<<endl;
                st.pop();
            }
        }
        if(str == "size")
        {
            if(!st.empty())
            {
                cout<<st.size()<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
    }
    return 0;
}