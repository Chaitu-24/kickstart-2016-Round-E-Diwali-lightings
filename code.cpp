#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
 {
    string s;
    cin>>s;
    int arr[s.length()];
    if (s[0]=='B')
    {
        arr[0]=1;
    }
    else
    {
        arr[0]=0;
    }
    for(int i=1;i<s.length();i++)
    {
        if(s[i]=='B')
        {
            arr[i]=arr[i-1]+1;
        }
        else
        {
            arr[i]=arr[i-1];
        }
    }
    unsigned long long int l,r;
    cin>>l>>r;
    l=l-1;
    int t=arr[s.length()-1];
    unsigned long long int left=(l/s.length())*t;
    if(l%s.length()!=0)
    left+=arr[(l%s.length()-1)];
    unsigned long long int right=(r/s.length())*t;
    if(r%s.length()!=0)
    right+=arr[(r%s.length()-1)];
    cout<<"Case #"<<j<<": "<<right-left<<endl;
 }
    return 0;
}
