//
// Created by renana on 20/12/18.
//

#include "whileCommand.h"

whileCommand::whileCommand() {}

int whileCommand::doCommand(vector<string>::iterator &vectorIt) {
    while(this->cp->doCommand(vectorIt)){
        for (auto i: this->listCommands){
            i->doCommand(vectorIt);

        }
    }

}