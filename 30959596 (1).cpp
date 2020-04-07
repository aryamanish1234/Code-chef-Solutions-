#include <iostream>

using namespace std;
int n, m , X, Y, s, x[10002], y[10002], tot, tot1;

int tt, answers[100];


int main()
{
    cin >> tt;
    for(int b = 0; b < tt; b++){
        tot = 0;
        tot1 = 0;
        cin >> n >> m;
        cin >> X >> Y >> s;
        x[X + 1] = n + 1;
        y[Y + 1] = m + 1;
        if(X > 0){
            for(int i = 1; i <= X; i ++){
                cin >> x[i];
            }
        }
        if(Y > 0){
            for(int i = 1; i <= Y; i ++){
                cin >> y[i];
            }
        }



        for(int i = 0; i<= X; i++){
            tot1 += int((x[i+ 1] - x[i] - 1)/s);
        }

        for(int i = 0; i <= Y; i++){
            tot += int((y[i + 1] - y[i] - 1)/s) * tot1;
        }
        answers[b] = tot;
    }
    for(int b = 0; b < tt; b++){
        cout << answers[b] << "\n";
    }



}

