#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in ("bac.txt");
    int prev, x, kiir1, kiir2, n;
    in >> x;
    in >> prev;
    while (in >> n){
        if(prev%1000==x && n%1000==x){
            kiir1=prev;
            kiir2=n;
        }
     prev=n;
    }
    cout << kiir1 << " " << kiir2 << endl;
    return 0;
}
