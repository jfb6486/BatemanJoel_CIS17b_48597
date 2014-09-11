/*
 * Joel Bateman
 * August 27th, 2014
 * Purpose: Hello World with a GUI
*/

//QT Libraries
#include <QApplication>
#include <QLabel>
#include "Array.h"

using namespace std;

// Execution begins here
int main(int argc, char **argv){
    QApplication app (argc, argv);

    Array a(3,3);

    cout<<"Main: "<<endl;
    cout<<a.toString();

    QLabel *label = new QLabel(a.toString());
    label->show();
//    (*label).show(); // same as pointer above
    return app.exec();
}
