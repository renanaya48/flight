#include <string>
#include <vector>

#ifndef PROJECT1_COMMAND_H
#define PROJECT1_COMMAND_H

#include <map>

using namespace std;

class Command {
protected:
    map<string, double> symbolTable;
    std::map<string, Command*> commands;
public:
    virtual int doCommand(vector<string>::iterator &vectorIt) = 0;

};


#endif //PROJECT1_COMMAND_H
