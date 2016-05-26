//
// Created by vtimofeev on 15/05/16.
//

#ifndef OOPPROJECT_DIALOGTREE_H
#define OOPPROJECT_DIALOGTREE_H

#include <iostream>
#include <vector>

#include "DialogNode.h"

class DialogTree {
public:
    void load(std::string way);
    void perfrormDialog();
private:
    std::vector<DialogNode> nodes;
};


#endif //OOPPROJECT_DIALOGTREE_H
