
#ifndef PROJECT1_VARCOMMAND_H
#define PROJECT1_VARCOMMAND_H

#include <map>
#include <string>
#include <vector>

using namespace std;

class VarCommand {
    map<string, double> symbolTable;
    map<string, double>:: iterator mapIt;
public:
    VarCommand();
    virtual int doCommand(vector<string>::iterator &vectorIt);

};


#endif //PROJECT1_VARCOMMAND_H
