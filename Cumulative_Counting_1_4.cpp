//question 1-4
//Created by AbuEgg on 22/12/2020

//AbuEgg planted "N" kinds of plants at "M" locations, "P" is the first planting point, and planted one location for each "D" location.

//INPUT: (30 3, 1 3, 3 7, 1 4)T, the first row represents the number of locations M and the number of kinds N, else are the first location P and the distance D
//OUTPUT: (13), the rest locations

//KNOWLEDGE: fstream for operations on files
//KNOWLEDGE: iostream for I/O
//KNOWLEDGE: using namespace std; IMPLICIT NONE???
//KNOWLEDGE: endl to end the line, change the line, '\n'
//KNOWLEDGE: cout input to the screem
//KNOWLEDGE: return 0 to end the program

//KNOWLEDGE: double should be calculated and initialized with a decimal point ".".
//KNOWLEDGE: non-integer default is double
//KNOWLEDGE: Each variable entered by the subroutine must be declared separately
//KNOWLEDGE: Read data from the .txt, one line at a time, use ">>" link for the data in the line
//KNOWLEDGE: Array[0] is the first one.
//KNOWLEDGE: When the subroutine parameter is an array, pointers can be used, and pointers are also needed when returning to an array.
//KNOWLEDGE: Multi-line comments/**/

#include <fstream>
#include <iostream>

using namespace std;

int AbuEgg1_4_PLANT(int M, int *H, int P, int D)
{
    int i = P - 1;
    while (i < M)
    {
        H[i] = 1;
        i += D;
    }
    /*for (int i = 0; i < M; i++)
    {
        cout << H[i];
    }
    cout << endl;*/
    return *H;
}

int AbuEgg1_4_COUNT(int M, int *H)
{
    int count = 0;
    int i = 0;
    while (i < M)
    {
        if (H[i] == 0)
        {
            count++;
        }
        i++;
    }
    return count;
}

int main()
{
    ifstream inputdata("input.txt");
    ofstream outputdata("output.txt");
    int M, N, P, D, line;
    int H[29];
    inputdata >> M >> N;
    line = 0;
    while (line < N)
    {
        inputdata >> P >> D;
        *H = AbuEgg1_4_PLANT(M, H, P, D);
        line++;
    }
    int result = AbuEgg1_4_COUNT(M, H);
    outputdata << result << endl;
    inputdata.close();
    outputdata.close();
    return 0;
}