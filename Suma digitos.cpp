#include <iostream>
using namespace std;
int main()  {
    int n, x = 0;
    cout<<"Mi nombre es Alexandra Serrano, tengo 19 años, inserta numero 2201453 ";
    cin>>n; while(n>0)  {
        x = x+n%10;
        n = n / 10;
    }
    cout<<endl;
    cout<<"La suma de las cifras del código 2201453:" <<x<<endl;
    return 0;
}
