//
// Created by vtimofeev on 15/05/16.
//

#include "DialogTree.h"
#include <fstream>
#include <sstream>
#include <string>

void DialogTree::load(std::string way)
{
    std::ifstream ifs;
    ifs.open(way);

    if(!ifs.is_open()) {
        std::cout << "\nError, file \"" << way << "\" Does not exist!" << std::endl;
        std::exit(-1);
    }

    unsigned int newId; // reead from file

    while(ifs >> newId){

        // vars for options array
        std::vector<DialogOption> opts;
        std::string newOptionText;
        int nextNode = -1;

        // vars for each node
        std::string newNodeText;

        std::string tmp;

        ifs.ignore(2, ' '); // ignoring ": "

        getline(ifs, newNodeText, '\n');

        while(getline(ifs, newOptionText, '=')){

            ifs.ignore(256, '>'); // skipping "> "

            getline(ifs, tmp, '\n'); // this thing will delete
            nextNode = stoi(tmp);

            DialogOption newOption(newOptionText, nextNode);
            opts.push_back(newOption);
            if(ifs.peek() == '\n') // if next char is '\n' - begins new node.
            {
                break;
            }
        }

        ifs.get();

        DialogNode newNode(newId, newNodeText, opts);
        nodes.push_back(newNode);
    };

    ifs.close();
}

int getCommand()
{
    int c;
    std::string line;

    std::cout << "=> ";
    while (std::getline(std::cin, line))
    {
        std::stringstream ss(line);
        if (ss >> c)
        {
            if (ss.eof())
            {   // Success
                break;
            }
        }
        std::cout << "Error! Type a nubmer of option you want to say: " << std::endl << "=> ";
    }
    return c;
}

// Not correctl


void DialogTree::perfrormDialog() {
    std::cout << "\[Dialog srarted]\n\n";
    int currentIndex = 0;
    do {
        std::cout << nodes[currentIndex] << std::endl;
        int countOfOptions = nodes[currentIndex].getCountOfOptions();
        int cmd; // id of option from array
        cmd = getCommand();
        while (cmd > countOfOptions || cmd == 0) {
            std::cout << "You have only " << countOfOptions << " options!" << std::endl;
            cmd = getCommand();
        }

        currentIndex = nodes[currentIndex].getOptionByIndex(cmd - 1).getNextNodeId();

    } while(currentIndex != -1);
    std::cout << "[Dialog ended]" << std::endl;
}