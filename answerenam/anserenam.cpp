#include <iostream>

using namespace std;

int main(){

    
    for(int i = 0; i <5; i++){
        for(int j = 4; j > i; j--){
            cout << "  ";
        }
        for(int k = 0; k<=i; k++){
            cout << k << " ";
        }
        for(int l =0; l < i;l++){
            cout << l <<" ";
        }
        cout << endl;
    }
}