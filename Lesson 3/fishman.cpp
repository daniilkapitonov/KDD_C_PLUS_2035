#include <iostream>
using namespace std;
// [40, 50] - очень счастливый день -
// 46 - лучший день в его жизни -
// [26, 63] - обычный
// [35 , 57] - веселый -


int main(int argc, char const *argv[])
{
    int a;
    
    while (true){
        cin>> a;
        if (a==46){
            cout <<"BEST"<<endl;
        }else if (a>=40 && a<=50)
        {
            cout <<"LUCKY"<<endl;
        }else if (a>=35 && a<=57)
        {
            cout <<"FUNNY"<<endl;
        }else if (a>=26 && a<=63)
        {
            cout <<"ORDINARY"<<endl;
        }else{
            cout <<"BAD"<<endl;
        }
    }
}
