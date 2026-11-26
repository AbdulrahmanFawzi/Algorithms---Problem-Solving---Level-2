#include <iostream>
#include <string>    
#include <cstdlib>    
#include <ctime>      

using namespace std;


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

void PrintArray(int arr[100] , int arrLength){

    for(int i = 0; i < arrLength; i++){
        cout << arr[i] << " "; 
    }}


int MinNumber(int arr[100] , int arrLength){
    
    int minNumber = arr[0];

    for(int i = 0; i < arrLength; i++){
        if(arr[i] <= minNumber){
            minNumber = arr[i];
        }
    }

    return minNumber;

}


int main(){

    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArrayWithRandomNumber(arr,arrLength);
    cout << " \n Array Elements : ";
    PrintArray(arr , arrLength);

    cout << "\n Min Number is : "<< MinNumber(arr , arrLength);

}