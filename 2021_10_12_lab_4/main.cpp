#include <iostream>

using namespace std;

void divPrim(int n, int &s){
    s=0;

}


int main()
{
    int s, n;
    s=0;
    cout << "n=";
    cin >> n;
    int nr=0, oszto=2;
    while(oszto<=n){
    nr=0;
    while (n%oszto==0){
        n/=oszto;
        nr++;
    }
    if (nr%2==1){
        s+=oszto;
    }
    oszto++;
    }
    cout << s;
    return 0;
}
