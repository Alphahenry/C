//program to generate random walks
// 1. Initialize a 10x10 array with letters "A" to "Z" randomly.
// 2. Create a visited array of the same size, initially all false.
// 3. Choose a random starting position (x, y).
// 4. Mark the starting position as visited.
// 5. While there are valid moves:
//    a. Generate a random number and use it to decide the direction (0-3 for up, right, down, left).
//    b. Check if the move is valid (within bounds and unvisited).
//    c. If valid, move to the new position and mark it as visited.
//    d. If no valid move, terminate.

// 6. Output the final array with the walk path.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
//declare 10 by 10 array
    char myarr[10][10] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char arr[10][10] = {"."};
    srand(time(0));

    //random starting point
     int starting_point_row = (rand() % 10) +1;
     int starting_point_col = (rand() % 10) + 1;
     
     
     int starting_point = 
    

    return 0;
}