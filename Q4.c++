/*

1
A B
1 2 3
A B C D
1 2 3 4 5 

*/

#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int i = 1;
    while (i <= n){
        int j = 1;
        while (j <= i){
            if(i%2 != 0)
                cout << j << " ";
            
            else 
            cout << (char)(j + 64) << " ";
            

            j = j + 1;
        }
        cout << endl;
        i = i + 1;
        
    }
    
}
