#include "ifCommand.h"

ifCommand::ifCommand() {}

int ifCommand::doCommand(vector<string>::iterator &vectorIt) {
    if(this->cp->doCommand(vectorIt)) {
        for (auto i: this->listCommands) {
            i->doCommand(vectorIt)
        }
    }

}