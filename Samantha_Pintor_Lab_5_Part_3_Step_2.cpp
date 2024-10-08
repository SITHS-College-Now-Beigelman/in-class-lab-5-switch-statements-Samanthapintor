//Samantha Pintor
//Lab 5 
//10-08-24

#include <iostream>
#include <ctime> 

using namespace std; 

int main ()
{
int direct; //creating variable for direct 
int north = 0; //variable for north 
int west = 0; //variable for west
int east = 0; //variable for east
int south = 0; //variable for south
int numberSteps = 0; //variable for number of steps


//numberOfSteps = 
srand(time(0));

while (north == 1 || east == 3) //**not two or not three
{
    direct = rand() % 4 + 1; //1 means North, 2 means South, 3 means East and 4 means West

    if (direct == 1)
        {
            north = north + 1;
            numberSteps = numberSteps + 1;
        }
    if (direct == 2)
        {
            south = south + 1;
            numberSteps = numberSteps + 1; 
        }
    if (direct == 3)
        {
            east = east + 1;
            numberSteps = numberSteps + 1;
        }
    if (direct == 4)
        {
            west = west + 1;
            numberSteps = numberSteps + 1; 
        }


}
