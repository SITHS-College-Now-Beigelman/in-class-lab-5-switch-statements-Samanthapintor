//Samantha Pintor
//Lab 5 
//10-08-24
//Samantha Pintor
//Lab 5 
//10-08-24

#include <iostream>
#include <ctime> 

using namespace std; 

int main ()
{
  
    int a;  //declaring variable for a 
    int totalSteps = 0; //initializes the variable totalSteps to zero


    srand(time(0)); // Initialize random number generator
  
    for (a = 0; a < 10; a ++) //making it run ten times
    {
    
    //declaring variables 
    int direct; // Variable for direction 
    int north = 0; // Variable for north 
    int east = 0; // Variable for east
    int numberSteps = 0; // Variable for number of steps

    while (north != 3 || east != 2) // Loop until the destination is reached
    {
        numberSteps++; // Increase the number of steps by one
        
        direct = rand() % 4 + 1; // 1 = North, 2 = South, 3 = East, 4 = West

        if (direct == 1) // Move North
        {
            north++; // Move north
        }
        else if (direct == 2) // Move South
        {
            north--; // Decrease north (move down)
        }
        else if (direct == 3) // Move East
        {
            east++; // Move east         
        }
        else if (direct == 4) // Move West
        {
            east--; // Decrease east (move left)
        }
    }

    // Print the number of steps taken to reach the goal destination
    cout << "It takes " << numberSteps << " steps to get to the goal destination." << endl; 
  
    totalSteps += numberSteps; //variable "totalSteps" is the number of total steps 
    }
    
    //declaring variables
    int averageSteps; //variable for average number of steps
    
    //calculating the average number of steps
    averageSteps = totalSteps/10; //the total number of steps divided by ten
    cout << "Average Number of Steps: " << averageSteps << endl; //statement for number of steps
    
    
  
    return 0; 
}

/* Extra Credit: 
It takes 20097 steps to get to the goal destination. 
It takes 333 steps to get to the goal destination. 
It takes 45 steps to get to the goal destination. 
It takes 1559 steps to get to the goal destination. 
It takes 297 steps to get to the goal destination. 
It takes 41 steps to get to the goal destination. 
It takes 518179 steps to get to the goal destination. 
It takes 1399 steps to get to the goal destination. 
It takes 27 steps to get to the goal destination. 
It takes 231 steps to get to the goal destination. 
Average Number of Steps: 54220
*/
    
