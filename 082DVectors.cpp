#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int ROWS = 2;
    const int COLS = 3;
    //declare matrix with data for vector to copy
    double pretendData[ROWS][COLS] = { 1, 2, 3, 4, 5, 6 };

    vector <vector<double>> my2Dvector;  //2D vector is a vector of vectors
    vector<double> row;  //a row of the 2D vector is actually a single vector

    cout << "Outputting 2D matrix data to screen: " << endl;
    //Show data from pretendData matrix
    for (int i = 0; i < ROWS; i++) {

        for (int j = 0; j < COLS; j++) {
            cout << pretendData[i][j] << " ";
        }

        cout << endl;
    }

    cout << "\nCopying data from 2D matrix to 2D vector." << endl;
    //copy data from pretendData into vector my2Dvector
    for (int i = 0; i < ROWS; i++) {

        for (int j = 0; j < COLS; j++) {
            row.push_back(pretendData[i][j]);
        }
        my2Dvector.push_back(row);  //once we make row vector, add it to 2D vector
        row.clear();  //delete row after we add it to my2Dvector
    }


    //output data from my2Dvector to screen
    cout << "Outputting data from 2D vector to screen: " << endl;


    for (int i = 0; i < my2Dvector.size(); i++) {

        for (int j = 0; j < my2Dvector[i].size(); j++) {  //loop through ith row
            cout << my2Dvector[i][j] << " ";
        }

        cout << endl; //create new line between rows of output
    }

    return 0;
}