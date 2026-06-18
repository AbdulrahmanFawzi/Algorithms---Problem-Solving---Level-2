#include <iostream>
#include <cmath>

using namespace std;


void PrintAllWords(){
    for(char i = 'A'; i <= 'Z' ; i++){
        for(char j = 'A'; j <= 'Z' ; j++){
            for(char k = 'A'; k <= 'Z' ; k++){
                cout << i << j << k << endl;
            }
        }
        
            
    }
    
}

int main(){
    PrintAllWords();
}