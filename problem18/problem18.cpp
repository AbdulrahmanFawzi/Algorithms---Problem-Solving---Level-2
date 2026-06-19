#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void ReadName(string &Name)
{

    cout << "Please enter your name: " << endl;
    cin >> Name;

}

string EncryptName(string Name){
    string encryptName = "";

    for(int i = 0; Name.length() > i; i++ ){
        encryptName += char(Name[i] + 2);
         

    }

    return encryptName;
    
}

string DecryptName(string encryptName ){

    string decryptName = "";

    for(int i = 0; encryptName.length() > i; i++ ){
        decryptName += char(encryptName[i] - 2);
         

    }
    return decryptName;

}


int main(){

    string Name = "";

    ReadName(Name);

    cout << " Text before Encryption : " <<  Name << endl ;

    cout<< " Text after Encryption : " << EncryptName(Name) << endl;

    cout<< " Text after Decryption : " << DecryptName(EncryptName(Name));
    
}