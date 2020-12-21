//question 1-3
//Created by AbuEgg on 21/12/2020

//AbuEgg A strange question...

//INPUT: (4, 10 3 1 2, 10 2 1 2, 10 9 7 3, 10 10 10000 0)T, the first row represents the number of groups of data T, else N, M, V, K
//OUTPUT: (3, -1, -1, 0)T

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

#include <fstream>
#include <iostream>

using namespace std;

int AbuEgg1_3(int N, int M, int V, int K)
{
    int n = 1;
    int A = M;
    if (M >= N)
    {
        return 0;
    }
    if (M < V)
    {
        return -1;
    }

    while (A < N)
    {
        if (A >= (A - V) * K)
        {
            return -1;
        }
        A = (A - V) * K;
        n++;
    }
    return n;
}

int main()
{
    ifstream inputdata("input.txt");
    ofstream outputdata("output.txt");
    int T, N, M, V, K, line;
    inputdata >> T;
    line = 0;
    while (line < T)
    {
        inputdata >> N >> M >> V >> K;
        int result = AbuEgg1_3(N, M, V, K);
        outputdata << result << endl;
        line++;
    }
    inputdata.close();
    outputdata.close();
    return 0;
}