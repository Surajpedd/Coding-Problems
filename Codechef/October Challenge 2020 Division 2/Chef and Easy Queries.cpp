#include <iostream>
using namespace std;
#define ll long long int 
int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,count=0,i;
        cin>>n>>k;
        ll q[n];
        for(int j=0;j<n;j++)
            cin>>q[j];
        for(i=0;i<n;i++)
        {
            if(q[i]>=k)
            {
                count++;
                q[i+1]+=(q[i]-k);
            }
            if(q[i]<k)
                break;
        }
        if(i==n)
            count+=((q[n-1]-k)/k);
        cout<<count+1<<endl;
    }
	return 0;
}
