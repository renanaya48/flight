#include "VarCommand.h"

VarCommand::VarCommand(){}
int VarCommand::doCommand(vector<string>::iterator &vectorIt){
    //if the var doesn't exsits in the map
    if (!this->symbolTable.count(*vectorIt)){
        this->symbolTable.insert(std::pair<string, double>(*vectorIt, 0));
    }
    //the vae exist in the map
    else{
	this->mapIt=this->symbolTable.find(*vectorIt);
	vectorIt+=2;
	(*this->mapIt).second=(*vectorIt);

    }
}
