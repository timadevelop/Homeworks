//
// Created by vtimofeev on 15/05/16.
//

#include "DialogNode.h"

// iostream aready included in .h file
using namespace std;

DialogNode::DialogNode() : id(0), text("")
{};

DialogNode::DialogNode(unsigned newId, string txt, vector<DialogOption> opts )
{
    id = newId;
    text = txt;
    options = opts;
}


ostream& operator<<(ostream& os, const DialogNode& node)
{
    os << node.getText() << endl;

    for (int i = 0; i < node.options.size(); ++i) {
        os << i + 1 << ". " << node.options[i].getText() << endl;
    }

    return os;
};

unsigned int DialogNode::getId() const
{
    return id;
};

std::string DialogNode::getText() const
{
    return text;
};


int DialogNode::getCountOfOptions() const
{
    return options.size();
};
DialogOption DialogNode::getOptionByIndex(int i) const
{
    return options[i];
};
//void DialogNode::printOptions() const
//{
//    for (int i = 0; i < options.size(); ++i) {
//        cout << i << ". " << options[i].getText() << endl;
//    }
//};