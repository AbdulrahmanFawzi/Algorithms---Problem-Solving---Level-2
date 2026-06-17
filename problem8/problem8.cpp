#include <iostream>   
#include <string>     
using namespace std;  


void ReadPositiveNumber(int &Number1, int &Number2)
{
        cout << "Please enter your number: " << endl; 
        cin >> Number1; 
        
        cout << "Please enter your digit: " << endl; 
        cin >> Number2;
}


int ReadDigitAndNumbers(int Number1, int Number2)
{
    int Remainder = 0 , counter = 0 ;
    
    
    while (Number1 > 0)
    {
        Remainder = Number1 % 10; 
        Number1 = Number1 / 10; 
        if (Remainder == Number2){
            counter++;
        }   
        
    }
    return counter;
}

void PrintFrequntDigit(int Number1, int Number2){
    cout << "Digit " << Number2 << " Frequency is " << ReadDigitAndNumbers(Number1,Number2) << " Times\n"  ;
}


int main()
{
    int Number1, Number2;
    ReadPositiveNumber(Number1,Number2);
    PrintFrequntDigit(Number1,Number2);
    
    return 0; 
}