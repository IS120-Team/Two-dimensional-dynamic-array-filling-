//Two-dimensional dynamic array (filling)

#include <iostream>
using namespace std;

void showArray()
{

}

void filling(int rows, int cols)
{
    cout << "Вводите числа массива по одному" << endl;

    int** arr = new int* [rows];

    for (int i = 0; i < rows; i++) //cycle for input
    {
        arr[i] = new int[cols];
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
       cout << "В массиве сейчас содержатся" << endl;

    for (int i = 0; i < rows; i++) //cycle for output
     {

        for (int j = 0; j < cols; j++)
        {
              cout << arr[i][j] << "\t";
         }
            cout << endl;
     }

        for (int i = 0; i < rows; i++) //cycle for clearing each element of the array
        {
           
            delete[] arr[i];
        }
       
        delete[] arr;
  }

int main()
{
    setlocale(LC_ALL, "ru");

    int rows = 0;
    int cols = 0;

    cout << "Введите число столбцов" << endl;
    cin >> cols;
    cout << "Введите число строк" << endl;
    cin >> rows;
    filling(rows, cols);
  
}


