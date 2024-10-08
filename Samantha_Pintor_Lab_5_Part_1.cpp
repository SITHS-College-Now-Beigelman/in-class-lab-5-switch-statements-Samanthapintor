[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/AJQYG_jH)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=16432490&assignment_repo_type=AssignmentRepo)
//Samantha Pintor
//Lab 5 
//10-08-24

#include <iostream> 
#include <iomanip>

using namespace std; 

int main ()
{

  //creating variables
   
    int totalcaloriesburned; //variable for total calories burned
    int caloriesWantToBurn; //variable for the amount of calories the user wants to burn
    int weightinkilo; //variable for weight in kilograms
    int timeExcercise; //duration for excercise
   
    int excerciseType;


    cout << "Hello." << "Indicate how long in minutes you want to excercise for." << endl; //asking for duration time
    cin >> timeExcercise;
  
    cout << "Excellent." << "What is your weight (in kilograms)?" << endl; //asking for weight in kilograms
    cin >> weightinkilo;

    cout << "What excercise do you want to do? Click 1 for walking slowly, 2 for walking quickly and 3 for jogging." << endl; //asking for excercise type
    cin >> excerciseType;
    
    //if statements
    
    if (excerciseType == 1){
        cout << "You burn " << fixed << setprecision (0) << timeExcercise*(2*3.5*weightinkilo)/200 << " calories when walking slowly." << endl; //formula for calculating calories burned when walking slowly
    }
    if (excerciseType == 2){
        cout << "You burn " << fixed << setprecision (0) << timeExcercise*(3*3.5*weightinkilo)/200 << " calories when walking quickly." << endl; //formula for calculating calories burned when walking quickly
    }
    if (excerciseType == 3){
       cout << "You burn " << fixed << setprecision (0) << timeExcercise*(8.8*3.5*weightinkilo)/200 << " calories when jogging." << endl; //formula for calculating calories burned when jogging
    }
    else if (excerciseType != 1 && excerciseType != 2 && excerciseType != 3){
        cout << "Invalid. Please enter 1 for walking slowly, 2 for walking quickly and 3 for jogging." << endl;
        cin >> excerciseType;
    }
       
   
    cout << "How many calories do you want to burn?" << endl; //asking the user how many calories they want to burn
    cin >> caloriesWantToBurn;
    cout << "We can figure out how long it will take to burn " << caloriesWantToBurn << " calories." << endl; //statement of goals

    cout << setfill ('#');  //set fill to hash tags
    cout << setw(100) << "#" << endl; //line of hash tags
    
    cout << setfill (' '); //set fill to blank space
    cout << setw(1) << "#" << setw(5) << "If you walk slowly for " << fixed << setprecision (0) << caloriesWantToBurn/(2*3.5*weightinkilo/200) << " minutes then you will burn the amount of calories you want." << setw (12) << " " << setw(1) << "#" << endl; //line of text 
    cout << setw(1) << "#" << setw(98) << " " << setw(1) << "#" << endl; //line of space
    cout << setw(1) << "#" << setw(5) << " " <<  "If you walk quickly for " << fixed << setprecision (0) << caloriesWantToBurn/(3*3.5*weightinkilo/200) << " minutes then you will burn the amount of calories you want." << setw (6)  << " " << setw(1) << "#" << endl; //line of text
    cout << setw(1) << "#" << setw(98) << " " << setw(1) << "#" << endl; //line of space 
    cout << setw(1) << "#" << setw(5) << " " << "If you jog for " << fixed << setprecision (0) << caloriesWantToBurn/(8.8*3.5*weightinkilo/200)<< " minutes then you will burn the amount of calories you want." << setw(16)  << " " << setw(1) << "#" << endl; //line of text 
    cout << setw(1) << "#" << setw(98) << " " << setw(1) << "#" << endl; //line of space
    
    cout << setfill ('#'); //set fill back to hash tag
    cout << setw(100) << "#" << endl; //line of hash tags
   
   
   

    return 0; 
}

/*
Hello.Indicate how long in minutes you want to excercise for.
100
Excellent.What is your weight (in kilograms)?
100
What excercise do you want to do? Click 1 for walking slowly, 2 for walking quickly and 3 for jogging.
1 
You burn 350 calories when walking slowly.
How many calories do you want to burn?
1000
We can figure out how long it will take to burn 1000 calories.
####################################################################################################
#If you walk slowly for 286 minutes then you will burn the amount of calories you want.            #
#                                                                                                  #
#     If you walk quickly for 190 minutes then you will burn the amount of calories you want.      #
#                                                                                                  #
#     If you jog for 65 minutes then you will burn the amount of calories you want.                #
#                                                                                                  #
####################################################################################################
*/
