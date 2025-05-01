#include <iostream>
#include <string>
using namespace std;;

int getmax(int a, int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }

}

int main()
{
    string s;
    int count = 1 , m=1;
    getline(cin,s);

    if (s.length() == 1)
    {
        cout << 1 << '\n';
    }

    else
    {
        for (int i = 1 ; i < s.length() ; i++)
        {
            if (s[i-1] == s[i])
            {
                count += 1;
                m=getmax(m,count);
            }
            else
            {
                count = 1;
                
            }
        }
        cout << m <<'\n';
    }
}
