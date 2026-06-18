#include <iostream>
#include <cmath>

using namespace std;

int ReadPositiveNumber(string massage){

    int number = 0;

    do
    {
        cout<< massage << endl;
        cin >> number ;
    } while (number <= 0);

    return number;

}

void PrintInvertedPattern(int number){

    for(int i = number; i >= 1; i--){
        for(int j = 1; i >= j; j++){
            cout << i;
        }
        cout << endl;
    }

}

int main(){
    PrintInvertedPattern(ReadPositiveNumber("Please enter positive number: "));
}