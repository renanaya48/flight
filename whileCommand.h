//
// Created by renana on 20/12/18.
//

#ifndef UNTITLED_WHILECOMMAND_H
#define UNTITLED_WHILECOMMAND_H
#include "conditionParser.h"


class whileCommand: public conditionParser {
    conditionParser* cp;

public:
    whileCommand();
    virtual int doCommand(vector<string>::iterator &vectorIt);

};


#endif //UNTITLED_WHILECOMMAND_H
