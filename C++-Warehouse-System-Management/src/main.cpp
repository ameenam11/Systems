#include <iostream>
#include "../include/Order.h"
#include "../include/Volunteer.h"
#include"../include/Customer.h"
#include"../include/WareHouse.h"
#include"../include/Action.h"

using namespace std;
WareHouse* backup = nullptr;

int main(int argc, char** argv){
    if(argc!=2){
        std::cout << "usage: warehouse <config_path>" << std::endl;
        return 0;
    }
    string configurationFile = argv[1];
    WareHouse wareHouse(configurationFile);
    wareHouse.start();
    if(backup!=nullptr){
    	delete backup;
    	backup = nullptr;
    }
    
    return 0;
}


