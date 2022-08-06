/**Database managment commands
 * db create <name>
 * db delete <name>
 * db list
**/
#include "commands.h"

#include <filesystem>
    namespace fs = std::filesystem;
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string currentDB = "none";

int createDatabase(string name){
    if(name == "" || name == " " || name == "none"){
        cout << "Error: No name given/Name cannot be blanck or 'none'!" << endl;
        return 0;
    }
    
    //Creating the folder for the Database
    string _name = "C:\\dataDino\\data\\" + name;
    fs::path path{ _name };

    //TODO: Creating the DBmanager file for the Database
    
    if(fs::exists(path)){
        cout << "Error: Database already exists!" << endl;
        return 0;
    }
    else{
        fs::create_directory(path);
        cout << "Created Database: " << name << endl;
        return 1;
    }
}

int deleteDatabase(string name){
    if(name == "" || name == " " || name == "none"){
        cout << "Error: No name given/Name cannot be blanck or 'none'!" << endl;
        return 0;
    }
    //Creating the folder for the Database
    string _name = "C:\\dataDino\\data\\" + name;
    fs::path path{ _name };
    if(fs::exists(path)){
        fs::remove_all(path);
        cout << "Deleted Database: " << name << endl;
        return 1;
    }
    else{
        cout << "Error: Database does not exist!" << endl;
        return 0;
    }
}

int listDatabases(){
    //Look what folders are in the data folder and print them out
    string _name = "C:\\dataDino\\data\\";
    fs::path path{ _name };
    if(fs::exists(path)){
        for(auto& p: fs::directory_iterator(path)){
            string fileSize = fs::file_size(path).string();
            cout << "Database: " << p.path().filename() << " | Used Space:" << fileSize  << endl;
        }
        return 1;
    }
    else{
        cout << "Error: No Databases found!" << endl;
        return 0;
    }
}
    