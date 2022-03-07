//Example of using getline with C++ string class
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string myLine;

    cout << "Enter a line of input: ";

    getline(cin, myLine);

    cout << "You just typed this line: \n";
    cout << myLine << endl;

    return 0;

}