// Project15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int start;
    cin >> start;
    for (int i=0; i<start; i++)
    {

        int n = 0, m=0;
        if (time(NULL) % 2 == 1)
        {
            while (time(NULL) % 2 == 1)
            {
                n++;
            }
        }
        else
        {
            while (time(NULL) % 2 == 0)
            {
                m++;
            }
        }
        cout << n << endl;   //  або n % x, якщо необхідно отримати число в заданих межах
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
