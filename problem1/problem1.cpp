#include <iostream>
#include <string>

using namespace std;

int main(){

    int MultiTotal;
    cout<< "\t\t\t Multibication Table From 1 to 10\n\n";
    cout << "\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n";
    cout <<"---------------------------------------------------------------------------------------\n";
    for(int i = 1; i <=10; i++){
        cout<< i << " |\t" ;
        for(int j =1; j<=10; j++){
            MultiTotal = i * j;
            cout << MultiTotal << " \t " ;
    }
    cout << endl;
    }

}
