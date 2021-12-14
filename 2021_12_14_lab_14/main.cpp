#include <iostream>

using namespace std;

int main()
{
    long long int n;
    short x, hossz=0;
    long long int eredmenyek[11];
    cin >> n;
    while(x>31){
        x=n%10;
        n=n/10-3*x;
        if(n>=0){
          eredmenyek[hossz]=n;
          hossz++;
        }

    }

    if(n%31==0){
        cout << "IGEN" << endl;
    }else{
        cout << "NEM" << endl;
    }
    for(x=0; x<hossz; x++){
        cout << eredmenyek[x] << " ";
    }
    return 0;
}
