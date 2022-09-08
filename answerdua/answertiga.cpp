#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i <= 5; i++){
        for(int j = 0; j<i;j++){
            if(i == 1){
                cout << "A ";
            }
            else if(i == 2){
                cout << "B ";
            }
            else if(i == 3){
                cout << "C ";
            }
            else if(i == 4){
                cout << "D ";
            }
            else{
                cout << "E ";
            }
        }cout << endl;
    }

}