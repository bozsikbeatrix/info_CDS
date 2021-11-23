#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int szamlalo=0, maxhossz=0, maxdb=0;
    int szam;
    while(in>>szam){
        if(szam%2==0){
            szamlalo ++;
        } else{
        if(szamlalo>maxhossz){
            maxhossz=szamlalo;
            maxdb=1;
        }
        else if(szamlalo==maxhossz){
            maxdb++;
        }
        szamlalo=0;
        }
    }
    if(szamlalo==maxhossz){
        maxdb++;
    }
    cout << maxdb;
    return 0;
}
