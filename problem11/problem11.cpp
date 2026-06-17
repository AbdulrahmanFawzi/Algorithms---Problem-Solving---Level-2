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

int ReverseNumber(int number){
    int number2 = 0;
    int Reminder = 0;

    while (number > 0)
    {
        Reminder = number % 10;
        number = number / 10;
        number2 = number2 * 10 + Reminder;
    }

    return number2;

}

void CheckPalindromNumber(int number){
    if(number == ReverseNumber(number)){
        cout << " Yes, it is a Palindrom Number ";
    } else
    cout << " No, it isn't a Palindrom Number ";

}

int main(){

    CheckPalindromNumber(ReadPositiveNumber("Please enter a positive number: "));

}