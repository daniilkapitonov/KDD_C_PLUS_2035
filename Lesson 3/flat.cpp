#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    float N,P,Q,K,F=3;
    cin >> N;
    cin >> P;
    cin >> Q;
    cin >> K;
    int P1, F1; //искомый подъезд и этаж
    cout << K/(F*Q) << endl;
    P1 = ceil(K/(F*Q));
    cout << "Номер подъезда - " << P1 << endl;
    float P_cash=0;
    if (P1 == 1){
        P_cash = 1;
    } else{
        P_cash = P1-1;
    }
    F1 = ceil((K-(F*Q*P_cash))/F);
    cout << "Номер этажа - " << F1 << endl;
}
