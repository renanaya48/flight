#include "conditionParser.h"
using namespace std;

conditionParser::conditionParser(){}

int conditionParser::doCommand(vector<string>::iterator &vectorIt){
    while (*vectorIt != "{"){
        //deal with the expression
    }
    //if(the expression)
    while (*vectorIt != "}"){
        if (this->commands.count(*vectorIt)) {
            this->listCommands.push_back(this->commands.find(*vectorIt)->second);
            vectorIt++;
        } else if (*vectorIt == "while"){
            //TODO
        } else if (*vectorIt == "if"){
            //TODO
        } else if (*vectorIt == "print"){
            //TODO
        } else if (*vectorIt == "sleep"){
            //TODO
        } else if (this->symbolTable.count(*vectorIt)) {
            //TODO
        }
    }
}
//virtual bool isTrue();
//void toParser(vector<string>::iterator &vectorIt)


