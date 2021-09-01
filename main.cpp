#include <iostream>

using namespace std;

void insertionSort (int array[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = array[step], i = step - 1;


        while (key < array[i] && i >= 0)
        {
            array[i+1] = array[i];
            i--;
        }
        array[i+1] = key;
    }
}

void print (int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
    cout << endl;
}

int main()
{
    int array[] = {5,3,4,1,2}, size = sizeof(array)/ sizeof(array[0]);

    insertionSort(array, size);
    print (array, size);


    return 0;
}
