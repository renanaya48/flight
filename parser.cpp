
#include "parser.h"

parser::parser(){
    this->commands.insert(std::pair<string, Command*>("openDataServer", new OpenServerCommand()));
    this->commands.insert(std::pair<string, Command*>("connect", new ConnectCommand()));
    this->commands.insert(std::pair<string, Command*)("while", new whileCommand());
    this->commands.insert(std::pair<string, Command*)("if", new ifCommand());
}

void parser::runParser(vector<string> v){
    list<string>varList;
    vector<string>:: iterator vectorIt;
    for (vectorIt = v.begin(); vectorIt != v.end(); vectorIt++) {
        if (this->commands.count(*vectorIt)) {
            Command *com = this->commands.find(*vectorIt)->second;
            if (*vectorIt == "var") {
                vectorIt++;
                varList.pushback(*vectorIt);
                com->doCommand(vectorIt);
            }
//            else
//                vectorIt++;
            else if (*vectorIt == "while") {
                vectorIt++;
                com->doCommand(vectorIt);
            } else if (*vectorIt == "if") {
                vectorIt++;
                com->doCommand(vectorIt);
            } else if (*vectorIt == "print") {
                //TODO
            } else if (*vectorIt == "sleep") {
                //TODO
            }
        }else if (contains(varList, *vectorIt) {
            VarCommand *var = new VarCommand();
            var->doCommand(vectorIt);
        } else
		throw "input error"
    }
    //cout << "work parser" << endl;

}
