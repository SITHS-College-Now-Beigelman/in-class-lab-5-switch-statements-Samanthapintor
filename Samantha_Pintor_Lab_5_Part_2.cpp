//Samantha Pintor
//Lab 5 Part 2 
//10-08-24

#include <iostream>
#include <iomanip>
using namespace std;


int main ()
{
    //creating variables
    int gigabyteHotspot; //variable for the number of gigabytes in the hotspot plan
    int musicType;
   
    //asking the user question, finding out how many hours they can stream equal quality
    cout << "How many gigabytes are in your monthly hotspot plan?" << endl; //asking the user how many gigabytes are in their monthly hotpot
    cin >> gigabyteHotspot;
    
    cout << "What kind of music do you want to stream? Click 1 for low quality, 2 for normal quality, and 3 for high quality." << endl;
    cin >> musicType;

    //if statements
    if (musicType == 1) {
        cout << "You can stream low quality music for " << fixed << setprecision (0) << (gigabyteHotspot*1000)/43.2 << " hours." << endl; //number of hours user can stream low quality 
    }
    if (musicType == 2){
        cout << "You can stream normal quality music for " << fixed << setprecision (0) << (gigabyteHotspot*1000)/72 << " hours." << endl; //number of hours user can stream normal quality 

    }
    if (musicType == 3){
        cout << "You can stream high quality music for" << fixed << setprecision (0) << (gigabyteHotspot*1000)/115.2 << " hours." << endl; //number of hours user can stream high quality
    }
    else if (musicType != 1 && musicType != 2 && musicType != 3){
        cout << "Invalid. Please enter 1 for low quality, 2 for normal quality, and 3 for high quality music." << endl;
        cin >> musicType; 
    }

    return 0;
}
/*
How many gigabytes are in your monthly hotspot plan?
100
What kind of music do you want to stream? Click 1 for low quality, 2 for normal quality, and 3 for high quality.
2
You can stream normal quality music for 1388 hours.
*/
