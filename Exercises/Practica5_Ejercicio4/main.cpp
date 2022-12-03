#include <iostream>
using namespace std;
int main()
{
 int i = 8, j = 5;
 float x = 0.005, y = -0.01;
 cout << "i = " << i << ", j = " << j << ", x = " << x << ", y = " << y << endl;
 i /= j;
 cout << "i = i/j: " << i << endl;
 x *= 2;
 cout << "x = x*2: " << x << endl;
 y -= i;
 cout << "y = y-i: " << i << endl;
 i -= (i-j);
 cout << "i = i - (i-j): " << i << endl;
 x /= i;
 cout << "x = x/i: " << x << endl;
 i %= j;
}
