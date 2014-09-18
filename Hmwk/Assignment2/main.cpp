#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

class abstractArray{

    public:

    int** array;
    int nRows;
    int nCols;
    const char* printArray;
    int arraySize;

    virtual void fillArray() = 0;

    // Constructor
    abstractArray(){}

    ~abstractArray(){}
};

class baseArray : public abstractArray{
public:
    // Constructor
    baseArray(int _nRows, int n_Cols){

        nRows=_nRows;
        nCols=_nRows;

        arraySize=nRows*nCols;
    }

    // Deconstructor
    ~baseArray(){
        delete [] array;
    }

    void fillArray(){
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

};

class derivedArray : public baseArray {
public:

    derivedArray(int _nRows, int _nCols) : baseArray(_nRows, _nCols){}

    ~derivedArray(){}

    void toPrint(){
        cout<<"\n";
        cout<<"Print: "<<"\n";
        for(int row=0;row<nRows;row++){
            for(int col=0;col<nCols;col++){
                cout<<array[row][col]<<" ";
            }
        }
    }
};

// Execution begins here
int main(int argc, char **argv){

    derivedArray a(3,3);

    a.fillArray();
    a.toPrint();

    return 0;
}

