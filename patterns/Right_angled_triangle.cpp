#include <bits/stdc++.h>
using namespace std;

/*

Program to print the following pattern: 
*
**
***
****
*****

*/

int main()
{
    int triangle_length = 5;
    for (int i = 0; i < triangle_length; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}