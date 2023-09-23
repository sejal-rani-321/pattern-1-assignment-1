/*

******
*    *
*    *
******

*/

#include<iostream>
using namespace std;

int main(){
    int m ;
    cout << " rows : " << endl;
    cin >> m;
    int n;
    cout << " col : " << endl;
    cin >>n;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <=n; j++){
             if(i==1 || i==m || j==1 || j==n)
            // if(i==1 || i==m || j==1 || j==m)
            cout <<"*";
            else cout << " ";
        }
        cout << endl;
    }
}