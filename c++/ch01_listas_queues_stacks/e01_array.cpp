/*
*   ITESS-TICS 2025
*   ICPC-CP SPRING JAKARTA
*   BY MIGUEL TORRES
*   Array exampple
*   Programmer: Flores Torres Miguel Angel
*   08-02-2025
*
*   win: c++ e01_array.cpp -o e01_array.exe
*   linux, mac: c++ e01_array.cpp -o e01_array
*   cmd: e01_array.exe
*   powershell: .\e01_array.exe
*   linux, mac: ./e01_array
*/

//Librerias
#include <iostream>
#include <array>

using namespace std;
int main()
{
    array<int, 10> arr;

    arr[0] = 1;
    cout << "First elment: " << arr[0] << endl;

    array<int, 4> arr2 = {1, 2, 3, 4};
    cout << "Elements in second array: ";
    for(int i = 0; i < arr.size(); i++)
        cout << arr2[i] << " ";

    cout << endl;    
    // exception
    try
    {
        cout << arr2.at(4);
        cout << arr2.at(5);
    } catch (const out_of_range& ex)
    {
        cerr << "Exception: " << ex.what();
    }
}
