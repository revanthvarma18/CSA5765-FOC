#include <bits/stdc++.h>
using namespace std;
  
const double PI = 3.142;
  
double cosXSeriesSum(double x, int n)
{
    // here x is in degree.
    // we have to convert it to radian 
    // for using it with series formula, 
    // as in series expansion angle is in radian
  
    x = x * (PI / 180.0);
  
    double res = 1;
    double sign = 1, fact = 1, pow = 1;
    for (int i = 1; i < 5; i++) {
        sign = sign * -1;
        fact = fact * (2 * i - 1) * (2 * i);
        pow = pow * x * x;
        res = res + sign * pow / fact;
    }
  
    return res;
}
  
// Driver Code
int main()
{
    float x = 50;
    int n = 5;
    cout << cosXSeriesSum(x, 5);
    return 0;
}
