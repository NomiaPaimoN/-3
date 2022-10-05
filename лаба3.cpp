#include <iostream> 
#include <iomanip> 
#include <math.h>
using namespace std;
int main()
{
    double a, b, h, x, y, s, p, m;
    int n, i;
    cout << "Vvedite a,b,n,h" << endl;
    cin >> a >> b >> n >> h;
    cout << "x" << setw(15) << "y" << setw(15) << "s" << setw(15) << "abs" << endl;
    x = a;
    do
    {
        p = s = 1;
        for (i = 1; i <= n; ++i)
        {
            p *= 2 * x / i;
            s += p;
        }
        y = exp(2 * x);
        m = abs(y - s);
        cout << x << setw(15) << setw(15) << y << setw(15) << s << setw(15) << m << endl;
        x += h;
    } while (x <= b + h / 2.);
    cout << endl;
    return 0;
}