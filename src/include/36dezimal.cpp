#include <iostream>;
#include <string>;
using namespace std;

int convert36dezimal(int input){
    int I = 0;
    string dezimal = "abcdefghijklmnopqrstuvwxyz1234567890";
    while(I <= 36){
        if(input == dezimal[I]){
           I++;
           return I;
        }
        I++;
    }
    return 0; //Wrong ID when returning 
}

int potenz(int x, int expo){
    int I =1;
    while(I <= expo){
        x*=x;
    }
    return x;
}

int convert36(string objectID){
    //string objectID;
    //cout << "Enter Object ID: ";
    //cin>>objectID;
    //cout << objectID;
    
    //TODO: Optemize code! Remove the chars
    char s1 = objectID[0];
    char s2 = objectID[1];
    int serverID = potenz(convert36dezimal(s1), convert36dezimal(s2));
    cout << serverID;

    char d1 = objectID[2];
    char d2 = objectID[3];
    int databaseID = potenz(convert36dezimal(d1), convert36dezimal(d2));
    cout << databaseID;
    
    char c1 = objectID[4];
    char c2 = objectID[5];
    int containerID = potenz(convert36dezimal(c1), convert36dezimal(c2));
    cout << containerID;
    
    char p1 = objectID[6];
    char p2 = objectID[7];
    int packageID = potenz(convert36dezimal(p1), convert36dezimal(p2));
    cout << packageID;
    
    //cout << "Finish!";
    return serverID, databaseID, containerID, packageID;
}