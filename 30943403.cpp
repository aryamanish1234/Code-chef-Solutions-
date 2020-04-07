#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, minX, maxX;
        cin >> n >> minX >> maxX;
        int eqw = 1, eqb = 0, w, b, spam = 0, nonspam = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> w >> b;
            eqb = eqb * w + b;
            eqw *= w;
        }
        for (int i = minX; i <= maxX; i++)
        {
            if ((i * eqw + eqb) % 2 == 0)
                spam++;
            else
                nonspam++;
        }
        cout << spam << " " << nonspam << endl;
    }
    return 0;
}