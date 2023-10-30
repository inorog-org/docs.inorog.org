#include <iostream>
using namespace std;
int main()
{
    int MAX=0,nr,n,i;
    cin>>n;
    MAX = nr;
    for(i=0;i<=n;i++)
    {
        cin>>nr;
        if(nr>MAX)
            MAX=nr;
    }
    cout<<MAX;
}
