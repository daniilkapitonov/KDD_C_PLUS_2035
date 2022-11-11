#include <iostream>
#include <iomanip>
using namespace std;
int **p=NULL;
int main(int argc, char const *argv[])
{
    p=new int* [2];
    p[0] = new int[2];
    p[1] = new int[8];
    p[0][1] = 3;
    p[1][4] = 8;
    for (int i=0; i<2;i++){
        p[0][i] = i;
    }
    for (int i=0; i<8;i++){
        p[1][i] = i;
    }
    p[0][10] =1;
    cout <<  p[0][10] << " " <<  p[1][4] << " ";

    int mass[2][2];
    mass[3][3] = 1;
}




















































// int main(int argc, char const *argv[])
// {
//     int ***p;
//     p = new int** [2];
//     for (int i=0;i<2;i++){
//         p[i] = new int* [2];        
//     }
//     for (int i=0;i<2;i++){
//         for (int j=0; j<2;j++){
//             p[i][j] = new int [2];  
//         }      
//     }
//     for (int i=0; i<2;i++){
//         for (int j=0; j<2;j++){
//             for (int k=0;k<2;k++)
//             {
//                 p[i][j][k] = 1;
//                 cout << p[i][j][k]<< " ";
//             }
//         }
//         cout << endl;
//     }

// }
