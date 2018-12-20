#include "Command.h"
#include <iostream>
#include <thread>
#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/socket.h>
#include <functional>
#include "string"


#ifndef PROJECT1_CONNECTCOMMAND_H
#define PROJECT1_CONNECTCOMMAND_H

using namespace std;

class ConnectCommand : public Command {

public:
    ConnectCommand();
    virtual int doCommand(vector<string>::iterator &vectorIt);
};

#endif //PROJECT1_CONNECTCOMMAND_H
