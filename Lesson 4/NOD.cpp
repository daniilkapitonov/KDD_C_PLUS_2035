#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int x,y;
    cin >> x>>y;
    while (x!=y){
        if (x>y){
            x=x-y;
        } else{
            y=y-x;
        }
    }
    cout << x << endl;
}
