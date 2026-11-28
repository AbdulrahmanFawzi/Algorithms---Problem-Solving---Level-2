#include <iostream>
#include <string>    
#include <cstdlib>    
#include <ctime>      

using namespace std;

enum enPrimNotPrime {Prime = 1 , NotPrime = 2}; 

enPrimNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);
    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimNotPrime::NotPrime;
    }
    return enPrimNotPrime::Prime;
}


int RandomNumber(int From , int To){

    int rundomNum = rand() % (To - From +1) + From;
    return rundomNum;
}

void FillArrayWithRandomNumber(int arr[100] , int &arrLength){

    cout<< "Please Enter A Positive Number";
    cin >> arrLength;

    for(int i = 0; i < arrLength; i++){
         arr[i] = RandomNumber(1 , 100);
    }
}

void CopyOnlyPrimaryNumbers(int arr[100], int arr2[100], int arrLength, int &arr2Lenght)
{
    int Counter = 0;  
    
    
    for (int i = 0; i < arrLength; i++)
    {
        
        if (CheckPrime(arr[i]) == enPrimNotPrime::Prime)
        {
            
            arr2[Counter] = arr[i];
            Counter++;  
        }
    }
    
    arr2Lenght = --Counter;
}

void PrintArray(int arr[100] , int arrLength){

    for(int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
        
    cout << "\n"; 
    }


int main(){

    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArrayWithRandomNumber(arr,arrLength);

    int arr2[100];
    int arr2Lenght = 0;

    CopyOnlyPrimaryNumbers(arr, arr2, arrLength, arr2Lenght);


    cout << " \n Array1 Elements : ";
    PrintArray(arr , arrLength);

    cout << "\n Prim Number In Array2 Elements : ";
    PrintArray(arr2 , arr2Lenght);

}