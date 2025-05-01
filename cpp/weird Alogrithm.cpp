#include <iostream>
using namespace std;;
#define intt long long

int main()
{
    intt n;
    
    cin >> n;
    
    while (n>0 and n!=1)
    {
        cout << n << ' ';
        if (n%2==0)
        {
            n/=2;
        }
        else if (n%2!=0) 
        {
            n=n*3+1;
        }
        
    }
    cout<<1;
}