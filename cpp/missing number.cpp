#include <iostream>
using namespace std;;
#define intt long long 


int main()
{
    intt n , x , total = 0 , compare = 0;
    

    cin >> n ;

    compare = ((1+n)*n)/2;

    for (int i = 0; i < n-1; i++) 
    {
        cin >> x;
        total += x;
    }
    
    cout << compare-total << '\n';
    

}

