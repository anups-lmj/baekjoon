#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
    int N;
    string str;
    stack<int> st;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> str;
        if (str == "push")
        {
            cin >> num;
            st.push(num);
        }
        if (str == "top")
        {
            if (st.empty())
            {
                cout << -1 << endl;
            }
            else
                cout << st.top() << endl;
        }
        if (str == "empty")
        {
            cout << st.empty() << endl;
        }
        if (str == "pop")
        {
            if (st.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << st.top() << endl;
                st.pop();
            }
        }
        if (str == "size")
        {
            if (st.empty())
            {
                cout << 0 << endl;
            }
            else
            {
                cout << st.size() << endl;
            }
        }
    }
    return 0;
}