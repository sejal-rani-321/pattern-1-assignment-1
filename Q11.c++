/*
   *
  **
 ***
****
 ***
  **
   *


*/

#include<iostream>
using namespace std;

int main(){

    int n = 4;

    for (int i = 1; i <= n; i++)
    {   //space 
        int space = n-i; 
        for (int k = 1; k <=n-i; k++){
            cout << " ";
        }
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
        n-=1;
        for (int i = 1; i <= n; i++)
    {   //space 
        int space = n-i; 
        for (int k = 1; k <=i; k++){
            cout << " ";
        }
        for (int j = 1; j <= n-i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    
}