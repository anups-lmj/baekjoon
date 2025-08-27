#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(void)
{
    int n,k;
    cin>>n>>k;
    queue<int>que;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        que.push(i);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(j==(k-1))
            {
                arr[i] = que.front();
                que.pop();
            }
            else
            {
                que.push(que.front()); 
                que.pop(); 
            }
        }
    }
    cout<<"<";
    for(int i=0;i<n;i++)
    {
        if(i==(n-1))
        {
            cout<<arr[i]<<">"<<endl;
            break;
        }
        cout<<arr[i]<<", ";
    }
    return 0;
}