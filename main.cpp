#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>
#include <fstream>
#include <list>
#include <vector>

using namespace std;


int main() {
    ifstream f;
    int i=0;
    list<char*>list;
    f.open("test.txt");
    if(f.is_open()){
        vector <string>v;
        string line;
        char * toChar;
        char *cut;
        while(getline(f, line)){
            toChar= const_cast<char*>(line.c_str());
            cut = strtok(toChar, " ");
            do{
                std::cout << cut << std::endl;
                list.push_back(cut);
                v.push_back(cut);
                cut = strtok(NULL, " ");
            } while (cut != NULL);
        }
        f.close();

    }


    std::cout << "Hello, World!" << std::endl;
    return 0;
}