#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

template <class i, class f>
f sum(i a, f b, char t){
    cout << t;
    return (a<b ? a:b);
}

// if a<b{
//     ret a;
// }
// else{
//     ret b;
// }

int main(int argc, char const *argv[])
{
    int x = 20;
    float y= 10.2;
    cout << sum(x,y, '+') << endl;
}
