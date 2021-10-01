#include <iostream>
using namespace std;
int main()
{
   int n, s, x, y;
   cout << "Enter side of the Equilateral triagle: ";
   cin >> n;
  for(x = 1; x <= n; x++)
   {
     for(s = x; s < n; s++)
        cout << " ";
    // for loop for displaying star
    for(y = 1; y <= x; y++)
       cout << "* ";
      cout << "\n";
   }
return 0;
}