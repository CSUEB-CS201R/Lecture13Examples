//Example of using getline() for string processing
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string myQuestion;

    cout << "What is your question?\n";

    getline(cin, myQuestion, '?');

    cout << "getline with '?' will record this: \n"
         << endl << myQuestion << endl;

    return 0;
}