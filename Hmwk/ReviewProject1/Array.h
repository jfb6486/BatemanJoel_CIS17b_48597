#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

class Array
{
private:
    int** array=0;
    int nRows=0;
    int nCols=0;
    const char* printArray=0;
    int arraySize=0;

public:
    // Constructor
    Array(int _nRows, int _nCols){

        nRows=_nRows;
        nCols=_nCols;

        arraySize=nRows*nCols;

        //Initialze random number generator
        srand(static_cast<unsigned int>(time(0)));

        // Declare the 2-D array
        array = new int*[nRows];

        // Fill the 2-D array with random numbers
        for(int row=0;row<nRows;row++){
            array[row]=new int[nCols];
        }
        for(int row=0;row<nRows;row++){
            for(int col=0;col<nCols;col++){
                array[row][col]=rand()%90+10;
                cout<<array[row][col];
            }
        }
        cout<<endl;
    }

    // Deconstructor
    ~Array(){
        delete [] array;
    }

    // Mutator methods
    void setRows(int r){
        nRows = r;
    }

    void setCols(int c){
        nCols = c;
    }

    // Accessor methods
    int getRows() const{
        return nRows;
    }

    int getCols() const{
        return nCols;
    }

    int getSize() const{
        return arraySize;
    }

    // Print method
    void printToArray(){
        cout<<"\n";
        cout<<"Print: "<<"\n";
        for(int row=0;row<nRows;row++){
            for(int col=0;col<nCols;col++){
                cout<<array[row][col]<<" ";
            }
        }
    }

    // Return *array contents as char array
    const char* toString(){

        stringstream ss;    // Stringstream
        string s;           // String to hold stream

        for(int row=0;row<nRows;row++){
            for(int col=0;col<nCols;col++){
                ss<<array[row][col]<<" ";
            }
//            cout<<"SS: "<<ss.str()<<endl;
        }
        s = ss.str();
        printArray = s.c_str();

        return printArray;
    }
};
#endif // ARRAY_H
