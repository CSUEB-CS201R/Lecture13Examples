//Example of using cin.get() for string processing
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string myLine;
    string yourName;

    cout << "Hello, what is your name?" << endl;

    char nextChar;
    cout << "\nType it in and I will spell it out one letter at a time!\n\n";
    do
    {
        cin.get(nextChar);
        cout << nextChar << endl;
    } while (nextChar != '\n');

    cout << "\nThat's how you spell it out!  The end.";

    return 0;

}