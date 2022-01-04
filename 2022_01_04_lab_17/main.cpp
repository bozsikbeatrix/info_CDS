#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, v[100][100], i, j;
    cout << "n=";
    cin >> n;
    ifstream in("input.txt");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            in >> v[i][j];
        }
    }
    for(i=0; i<n; i++){
        j=0;
        cout << v[i][j] << " ";
    }
    for(j=1; j<n; j++){
        i=n-1;
        cout << v[i][j] << " ";
    }
    for(i=n-2; i>=0; i--){
        j=n-1;
        cout << v[i][j] << " ";
    }
    for(j=n-2; j>0; j--){
        i=0;
        cout << v[i][j] << " ";
    }
    in.close();
    return 0;
}
