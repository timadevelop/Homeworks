//
// Created by vtimofeev on 15/05/16.
//

#ifndef OOPPROJECT_DIALOGOPTION_H
#define OOPPROJECT_DIALOGOPTION_H

#include <iostream>
#include <string>


class DialogOption {
public:
    DialogOption(std::string txt, int nextNode) : text(txt), nextNodeId(nextNode)
    {};

    std::string getText() const
    {
        return text;
    };

    // returns index of next node
    int getNextNodeId() const
    {
        return nextNodeId == -1 ? nextNodeId : nextNodeId - 1;
    };
private:
    std::string text;
    int nextNodeId;
};


#endif //OOPPROJECT_DIALOGOPTION_H
