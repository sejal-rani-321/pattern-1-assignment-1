
/*
A
A B
A B C
A B C D
*/

#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int i = 1;
    while (i <= n){
        int j = 1;
        while (j <= i)
        {
           cout << (char)(65 + j - 1) << " ";
           j = j + 1;
        }
        cout << endl;
        i = i + 1;
        
    }
    
} 
