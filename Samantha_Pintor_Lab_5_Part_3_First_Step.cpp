//Samantha Pintor
//Lab 5 Part 3 - first part
//10-08-24

#include <iostream> 
#include <ctime>

using namespace std;

int main ()
{
    srand(time(0));
    
    //creates variable 
    int direct;
    char a;
    
    //random number between 1 and 4 so each is 25% //probable
    direct = rand() % 4 + 1; 
    //1 means North, 2 means South, 3 means East and 4 means West
    
    for (a = 0; a < 26; a++)
    {
        cout << direct; 
    }

    return 0; 
}
/* Part 1 - the robot takes 25 steps West
44444444444444444444444444 
*/
