#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Hello! ";
    string s2 = "Prof. Erickson!";
    string s3;

    s3 = s1 + s2;

    cout << s3 << endl;

    s3 = s1 + s1 + s1 + s3 + s1 + s1;


    cout << s3 << endl;
}