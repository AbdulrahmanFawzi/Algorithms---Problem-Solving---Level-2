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

void CopyArray(int arr[100] , int arrLength ,int arr2[100] ){

    for(int i = 0; i < arrLength; i++){     
            arr2[i] = arr[i]; 
    }       
}


int main(){

    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;
    int arr2[100];

    FillArrayWithRandomNumber(arr,arrLength);

    CopyArray(arr , arrLength , arr2);

    cout << " \n Array1 Elements : ";
    PrintArray(arr , arrLength);

    cout << "\n Array2 Elements : ";
    PrintArray(arr2 , arrLength);

}