//
// Created by vtimofeev on 15/05/16.
//

#ifndef OOPPROJECT_DIALOGNODE_H
#define OOPPROJECT_DIALOGNODE_H

#include <iostream>
#include <string>
#include <vector>

#include "DialogOption.h"

class DialogNode {
    friend std::ostream& operator<<(std::ostream& os, const DialogNode& node); // for printing options
public:
    DialogNode();
    DialogNode(unsigned int newId, std::string txt, std::vector<DialogOption> opts );
    unsigned int getId() const;
    std::string getText() const;
    int getCountOfOptions() const;
    DialogOption getOptionByIndex(int) const;
private:
    unsigned int id;
    std::string text;
    std::vector<DialogOption> options;
};


#endif //OOPPROJECT_DIALOGNODE_H
