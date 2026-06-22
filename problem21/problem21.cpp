#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int ReadPositiveNumber(string massage)
{

    int number = 0;

    do
    {
        cout << massage << endl;
        cin >> number;
    } while (number <= 0);

    return number;
}

char RandomKeys(int From, int To)
{

    char randKeys = rand() % (To - From + 1) + From;
    return randKeys;
}

void PrintRandomKeys(int number)
{
    string randomKeys = "";
    int counter = 1;

    for (int i = number; i >= 1; i--)
    {
        for (int j = 1; j <= 16; j++)
        {

            randomKeys += RandomKeys(65, 90);
            if (j % 4 == 0 && j != 16)
            {
                randomKeys += "-";
            }
        }
        cout << "Key [" << counter << "] : " << randomKeys << endl;
        counter++;
        randomKeys = "";
    }
}

int main()
{
    srand((unsigned)time(NULL));
    PrintRandomKeys(ReadPositiveNumber("Please enter a positive number :"));
}
