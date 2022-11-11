#include <iostream>
#include <iomanip>
using namespace std;

void print_map(int w,int h,char s, int t_w, int t_h){
    for (int i=0; i<w;i++){
        for (int j=0; j<h;j++){
            if (i==t_w-1&&j==t_h-1){
                cout << '!';
            }else if (i==0 || i==w-1){
                cout << s;
            }else if (j==0||j==h-1)
            {
                cout << s;
            }else{
                cout<<" ";
            }
            
        }
        cout << endl;
    }
}
int main(int argc, char const *argv[])
{
    int w,h;
    cin >> w>>h;
    char s;
    cin >> s;
    int t_w,t_h;
    cin >> t_w>>t_h;
    print_map(w,h,s,t_w,t_h);
}



































// void print_wall(int w, int h, char s){
//     for (int i=0; i<w;i++){
//         for (int j=0; j<h;j++){
//             if (i==0||i==w-1){
//                 cout << s;
//             }else if (j==0||j==h-1)
//             {
//                 cout <<s;
//             } else{
//                 cout << " ";
//             }
            
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int w,h;
//     cin >> w>>h;
//     char s;
//     cin >> s;
//     print_wall(w,h,s);
// }