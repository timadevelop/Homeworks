#include <iostream>
#include <string>

using namespace std;

#include "DialogTree.h"

int main() {

    DialogTree myTree;

    // please, type there full way to your file
    cout << "Hello, please, type there full way to your file there, or you can write it in main.cpp file as default value of \"way\" variable.\nFor example in linux: /home/vtimofeev/ClionProjects/oopProject/info \n=>";

    string way = "/home/vtimofeev/ClionProjects/oopProject/info.txt"; // Default way.

    if(way.length() < 2)
        cin >> way;
    else
        cout << "Default way will be used\n";

    myTree.load(way);
    myTree.perfrormDialog();
    cout << "Bye!" << endl;
    return 0;
}