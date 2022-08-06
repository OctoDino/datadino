#include <iostream>
#include <string>

using namespace std;

int cmdHelp(string secondArg){
    if(secondArg == null){
        cout << "dataDino Help" << endl;
        cout << "### DB SYSTEM ################################" << endl;
        cout << "DB create <name>" << endl;
        cout << "DB delete <name>" << endl;
        cout << "DB list" << endl;
        cout << endl;

        cout << "### FS SYSTEM ################################" << endl;
        cout << "set <value> - set a value for an object" << endl;
        cout << "get <objectID> - Get the value of an object" << endl;
        cout << endl;

        cout << "### HELP SYSTEM ################################" << endl;
        cout << "help - To show this list" << endl;
        cout << "help <command> - To show the help of a specify command" << endl;

    }
    if(secondArg == "DB" || secondArg == "db"){
            cout << "DB create <name>" << endl;
            cout << "DB delete <name>" << endl;
            cout << "DB list" << endl;
        }
    if(secondArg == "set" || secondArg == "set"){
            cout << "set db <name>" << endl;
        }
    if(secondArg == "get" || secondArg == "get"){
            cout << "get db" << endl;
        }
    if(secondArg == "HELP" || secondArg == "help"){
            cout << "HELP <command>" << endl;
        }
    
    else{
            cout << "Error: Unknown HELP command!" << endl;
            cout << "If you are sure this is an Error please create an Issue on GitHub!" << endl;
            cout << "https://github.com/OctoDino/datadino/issues/new" << endl;
        }
}