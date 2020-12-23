//question 1-5
//Created by AbuEgg on 23/12/2020

//AbuEgg: another strange question......

//INPUT: (2, 88888 88888 88888, 36 237 893)T, the first row represents the number of events "N", the remaining lines show the tail number to be searched "T", the beginning "A" and the end "B" of consecutive numbers.
//OUTPUT: (1, 6)T, result

#include <fstream>
#include <iostream>
#include <math.h>

using namespace std;

int AbuEgg1_5(int T, int A, int B, int Q)
{
    int n = 0;
    int ID = A;
    while (ID < (B + 1))
    {
        if ((ID - T) % Q == 0)
        {
            n++;
        }
        ID++;
    }
    return n;
}

int get_length(int x)
{
    int leng = 0;
    while (x)
    {
        x /= 10;
        leng++;
    }
    //cout << leng << endl;
    return leng;
}

int main()
{
    ifstream inputdata("input.txt");
    ofstream outputdata("output.txt");

    int N, T, A, B;
    int line = 0;
    inputdata >> N;

    while (line < N)
    {
        inputdata >> T >> A >> B;
        int L = get_length(T);
        int Q = pow(10, L);
        int result = AbuEgg1_5(T, A, B, Q);
        outputdata << result << endl;
        line++;
    }
    inputdata.close();
    outputdata.close();

    //int test1 = 888;
    //int test2 = 10;
    //cout << test1 / test2 << endl;

    return 0;
}

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
//KNOWLEDGE: x^y, pow(x,y), #include <math.h>, double
//KNOWLEDGE: % Determine divide between int
//KNOWLEDGE: while (x) == while (x =! 0)
//KNOWLEDGE: int division only gets the attributed part