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
#include <vector>
#include <pthread.h>

#ifndef PROJECT1_OPENSERVERCOMMAND_H
#define PROJECT1_OPENSERVERCOMMAND_H

using namespace std;

class OpenServerCommand : public Command {

public:
    OpenServerCommand();
    virtual int doCommand(vector<string>::iterator &vectorIt);
};


#endif //PROJECT1_OPENSERVERCOMMAND_H
