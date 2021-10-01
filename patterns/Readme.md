#include <bits/stdc++.h>
using namespace std;
void right_angle_pattern(int row)
{
    for (int i = 0; i <=row; i++)
    {
        for (int j = 0; j <i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}

void equilateral_angle_pattern(int row)
{
    for(int i=1; i<=row; i++) 
     {
           /* Print leading spaces */
           for(int j=i; j<row; j++)
           {
                cout<<" ";
           }

           /* Print star */
           for(int j=1; j<=(2*i-1); j++)
           {
                cout<<"*";
           }

           /* Move to next line */
           cout<<"\n";
     }
}
int main()
{
    int n,s;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Press 1 to print right angle triangle\n Press 0 to print Equilateral triangle\n" << endl;
    cin >> s;
    if(s == 1)
        right_angle_pattern(n);
    else if(s == 0)
        equilateral_angle_pattern(n);
    else
        cout << "Invalid Input!!" << endl;
    return 0;
}
