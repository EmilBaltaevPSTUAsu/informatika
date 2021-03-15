#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    system("chcp 1251");
    int m, n;
    cout << "m=? ";
    cin >> m;
    cout << "n=? ";
    cin >> n;
    int res1 = m + --n;
    cout << "m+--n = " << res1 << endl;
    cout << "m = " << m << ", n = " << n << endl;
    int res2 = m++ < ++n;
    cout << "m++<++n = " << res2 << endl;
    cout << "m = " << m << ", n = " << n << endl;
    int res3 = n-- < --m;
    cout << "n--<--m = " << res3 << endl;
    cout << "m = " << m << ", n = " << n << endl;
}
