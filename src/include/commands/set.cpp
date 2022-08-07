#include "commands.h"
#include <iostream>

int setObject(string value){
    int newObjectID;
    //Check free ID from deleted Object First, that are saved in the deletedObjects.txt file : Location: datadino\data\objectID[2,3] = dbID\deletedObjects.txt
    //When no free ID is found, look for the last ObjectID in that Database and add 1 to it.


    //Path = datadino\data\objectID[2,3] = dbID\objectID[4,5] = containerID\objectID[6,7] = packageID
    //create a file (object) in the path and save the value in it.
    return newObjectID; //Retrun new ObjectID for new object
}