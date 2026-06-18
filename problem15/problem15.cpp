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

void PrintLetterPattern(int number){

    for(int i = 1; i <= number; i++){
        for(int j = 1; i >= j; j++){
            cout << char('A' + i - 1);
        }
        cout << endl;
    }

}

int main(){
    PrintLetterPattern(ReadPositiveNumber("Please enter positive number: "));
}