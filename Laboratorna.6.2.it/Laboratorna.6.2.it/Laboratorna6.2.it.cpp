#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

 int MAX_INT = 100;


void create(int arr[], int SIZE, int MIN, int MAX)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }
}


void Print(int arr[], const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << setw(4) << arr[i];
    cout << endl;
}


int findMinOddIndex(int arr[], const int SIZE)
{
    int m = -1;  
    int v = MAX_INT; 

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 != 0 && arr[i] < v) {  
            v = arr[i];  
            m = i;       
        }
    }
    return m; 
}

int main()
{
    srand((unsigned)time(NULL));

    SetConsoleCP(1251);          
    SetConsoleOutputCP(1251);

    const int SIZE = 10;         
    int MIN = -20;               
    int MAX = 20;                

    int arr[SIZE];               
    create(arr, SIZE, MIN, MAX); 

    cout << "Масив: ";
    Print(arr, SIZE);            

    int minOddIndex = findMinOddIndex(arr, SIZE);  

    if (minOddIndex != -1) {
        cout << "Індекс найменшого непарного елемента: " << minOddIndex << endl;
    }
    else {
        cout << "У масиві немає непарних елементів." << endl;
    }

    return 0;
}
