#ifndef PROJECT1_CONDITIONPARSER_H
#define PROJECT1_CONDITIONPARSER_H

#include "Command.h"
#include <list>
#include "VarCommand.h"
using namespace std;

class conditionParser:public Command {
protected:
    list<Command*> listCommands;
public:
    conditionParser();
    virtual int doCommand(vector<string>::iterator &vectorIt);
    //virtual bool isTrue();
    //void toParser(vector<string>::iterator &vectorIt)


};


#endif //PROJECT1_CONDITIONPARSER_H
