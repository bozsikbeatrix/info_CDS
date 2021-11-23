#include <iostream>

using namespace std;

int main()
{
    int n, ujszam=0, hatvany=1, szamjegy;
    cout << "n=";
    cin >> n;
    while(n>0){
        int szamjegy= n%10;
        n=n/10;
        if (szamjegy%2==0){
            ujszam=ujszam+hatvany*(szamjegy/2);
            hatvany=hatvany*10;
        }
        ujszam=ujszam+hatvany*szamjegy;
        hatvany*=10;

    }
    n=ujszam;
    cout << ujszam;
    return 0;
}
