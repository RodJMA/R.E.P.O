#include <iostream>
using namespace std;

int main()
{
    int array[5] = {1, 2, 3, 4, 5}, arrayD[5], temp = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }

    temp = array[4];
    arrayD[0] = temp;
    cout << "__________________________________________" << endl;
    for (int i = 0; i < 5; i++)
    {
        arrayD[i + 1] = array[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arrayD[i] << endl;
    }

    return 0;
}