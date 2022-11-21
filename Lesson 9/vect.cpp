#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    bool check = false;
    int xx;
    int yy;
    // cout << endl;
    cin >> xx;
    cin >> yy;
    for (int i=0; i<n-1; i++){
        // cout << endl;
        int x;
        int y;
        cin >> x;
        cin >> y;
        if (yy>=x){
            if (x>=xx){
                xx = x;
                if (yy>y){
                    yy=y;
                }
            } else{
                if (yy>y){
                    yy=y;
                }
            }
        } else{
            check = true;
        }
    }
    if (check){
        cout << "Таких точек нет";
    } else{
        // cout << "Интервал: "<< endl;
        for (int i=min(xx,yy); i<=max(xx,yy);i++){
            cout<< i<< " ";
        }
    }
}
// 1--8 3--10 5--7 1--22
//3--8 5--7
//5--7 1--22
//