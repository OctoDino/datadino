#include <iostream>
#include <string>
#include <filesystem>
    namespace fs = std::filesystem;
#include <fstream>
#include "include/commands/commands.h"

using namespace std;

int startUp(){
    string _name = "C:\\dataDino";
    fs::path path{ _name };

     if(fs::exists(path)){
        cout << "Database checkup completed!" << endl;
        return 0;
    }
    else{
        
        cout << "Folders and Files are missing - trying to fix this issue! Please wait!" << name << endl;
        _name = "C:\\dataDino\\data\\default";
        fs::path path{ _name };
        fs::create_directory(path);
        _name = "C:\\dataDino\\";
        fs::path path{ _name };
        fs::create_directory(path);
        return 1;
    }
    //TODO: Starting Server
    cout << "dataDino Server v. 1.0" << endl;
    return 0;
}

int commandManager(string command)
{
    string firstArg = command.substr(0, command.find(" "));
    if(firstArg == "DB" || firstArg == "db"){
        string secondArg = command.substr(command.find(" ") + 1);
        if(secondArg == "create" || secondArg == "create"){
            string thirdArg = command.substr(command.find(" ") + 1);
            createDatabase(thirdArg);
        }
        else if(secondArg == "delete" || secondArg == "delete"){
            string thirdArg = command.substr(command.find(" ") + 1);
            deleteDatabase(thirdArg);
        }
        else if(secondArg == "list" || secondArg == "list"){
            listDatabases();
        }
        else{
            cout << "Error: Unknown DB command! Try HELP DB" << endl;
        }
    }
    
    else if(firstArg == "HELP" || firstArg == "help"){
        string secondArg = command.substr(command.find(" ") + 1);
        cmdHelp(secondArg); //TODO: Implement cmdHelp in includes/commands/help.cpp
    }
    
    

    else if(firstArg == "Set" || firstArg == "set"){
        string secondArg = command.substr(command.find(" ") + 1);
        setObject(secondArg);
    }
    
    else if(firstArg == "Get" || firstArg == "get"){
        string secondArg = command.substr(command.find(" ") + 1);
        getObject(secondArg);
    }
    
    else if(firstArg == "EDIT" || firstArg == "edit"){
        string secondArg = command.substr(command.find(" ") + 1);
        string thirdArg = command.substr(command.find(" ") + 1);
        editObject(secondArg, thirdArg);
    }
    
    else if(firstArg == "DELETE" || firstArg == "delete"){
        string secondArg = command.substr(command.find(" ") + 1);
        deleteObject(secondArg);
    }
    
    else if(firstArg == "HELP" || firstArg == "help"){
        string secondArg = command.substr(command.find(" ") + 1);
        help(secondArg);
    }
    
    else if(firstArg == "KILL" || firstArg == "kill"){
        kill();
    }
    

    else{
        cout << "Error: No command given! Try HELP" << endl;
        return 0;
    }
    return 0;
}


int main(){
    startUp(); //StartUp Sequence
    cout << "C:\\dataDino> ";

    string command;
    cin >> command;
    commandManager(command);
    
}