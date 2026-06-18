#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string ReadPassword(string massage)
{

    string password = "";
    cout << massage << endl;
    cin >> password;

    return password;
}

bool PrintAllWords(string password)
{
    string word = "";
    int trials = 0;
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                word = word + char(i);
                word = word + char(j);
                word = word + char(k); 

                cout << "Trial [ " << trials + 1 << " ] : " << word << endl;
                trials++;

                if (word == password)
                {
                    cout << "Password is " << word << endl;
                    cout << "Found after " << trials << " Trials \n";
                    return true;
                } 
                    word = "";
                
            }
        }
       
    }
    return false;
}

int main()
{
    PrintAllWords(ReadPassword("enter password : "));
}