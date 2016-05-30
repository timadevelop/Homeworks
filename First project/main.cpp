#include <iostream>
#include <string>

using namespace std;

#include "DialogTree.h"

int main() {
	DialogTree myTree;

    cout << "Hello. Please, type there full way to your file there, or you can write it in main.cpp file as default value of \"way\" variable.\nFor example in linux: /home/vtimofeev/ClionProjects/oopProject/info.txt \nOr in windows with VS compiler you can use: info.txt \n=> ";

    string way;
    //way = "/home/vtimofeev/ClionProjects/oopProject/info.txt";

    if(way.length() < 2)
        getline(cin, way);
    else
        cout << "Default way will be used\n";

    myTree.load(way);
    myTree.perfrormDialog();
    cout << "Bye!" << endl;
    return 0;
}