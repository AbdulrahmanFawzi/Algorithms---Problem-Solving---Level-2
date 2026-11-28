#include <iostream>
#include <string>    
#include <cstdlib>    
#include <ctime>      

using namespace std;


int RandomNumber(int From , int To){

    int rundomNum = rand() % (To - From +1) + From;
    return rundomNum;
}

void FillArray(int arr[100] , int &arrLength){

    cout<< "Please Enter A Positive Number";
    cin >> arrLength;

    for(int i = 0; i < arrLength; i++){
         arr[i] = RandomNumber(1 , 100);
    }
}

void FillArray2(int arr[100] , int arrLength){

    for(int i = 0; i < arrLength; i++){
         arr[i] = RandomNumber(1 , 100);
    }
}

void PrintArray(int arr[100] , int arrLength){

    for(int i = 0; i < arrLength; i++){
        cout << arr[i] << " "; 
    }}

void SumOfArrays(int arr[100] , int arr2[100] , int sumOfArrays[100] ,  int arrLength){
    for(int i = 0; i < arrLength; i++)
    sumOfArrays[i] = arr[i] + arr2[i];
}


int main(){

    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;
    int arr2[100];

    FillArray(arr,arrLength);
    FillArray2(arr2,arrLength);


    cout << " \n Array1 Elements : ";
    PrintArray(arr , arrLength);

    cout << "\n Array2 Elements : ";
    PrintArray(arr2 , arrLength);

    int sumOfArrays[100];
    SumOfArrays(arr , arr2, sumOfArrays , arrLength);

    cout << "\n Sum of array 1 and array 2 is : ";
    PrintArray(sumOfArrays , arrLength);

}