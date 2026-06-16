#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int ReadPositiveNum(string massage){

    int number = 0;

    do
    {
        cout << massage << endl;
        cin >> number;

    } while (number < 0);
    
    return number;

}

bool CheckPerfectNum(int number){

    int sum = 0;

    for(int i = 1; i < number ; i++){
        if(number % i == 0){
            sum += i;
        }

    }
    return number == sum;
}

void PrintResult(int Number)
{
    if (CheckPerfectNum(Number))
    {
        cout << Number << " is Perfect";
    }
    else
    {
        cout << Number << " is Not Perfect";
    }
}

int main(){

    PrintResult(ReadPositiveNum("Please enter a positive number:"));
    
}