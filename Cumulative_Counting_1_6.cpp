//question 1-6
//Created by AbuEgg on 24/12/2020

//AbuEgg: another strange question......

//INPUT: (2, 5 17, 3 21)T, the first row represents the number of events "N", the remaining lines show the beginning and the end.
//OUTPUT: (4, 6)T, result

#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

int AbuEgg1_6(int N, int K)
{
    int i = 0;
    int m[999];
    int Q = 0;
    int sum = 0;

    while (Q < K)
    {
        Q = N * pow(2, i);
        i++;
    }

    if (abs(Q / 2 - K) <= abs(Q - K))
    {
        i--;
        Q = Q / 2;
    }

    int D = K - Q;

    m[0] = 0;
    int M = 0;
    int k = 1;
    for (int j = i - 1; j >= 0; j--)
    {
        m[j] = D / pow(2, j);
        if (abs(D - M - m[j] * pow(2, j)) > abs(D - M - (m[j] + 1) * pow(2, j)))
        {
            m[j]++;
        }
        cout << j << " " << m[j] << " " << i << endl;
        D = D + m[j] * pow(2, j);
        M += m[j] * pow(2, j);
    }

    for (int l = 0; l <= i - 1; l++)
    {
        sum += m[l];
    }

    return i + sum;
}

int main()
{
    ifstream inputdata("input.txt");
    ofstream outputdata("output.txt");

    int T, N, K;
    int line = 0;
    inputdata >> T;

    while (line < T)
    {
        inputdata >> N >> K;
        int result = AbuEgg1_6(N, K);
        outputdata << result << endl;
        line++;
    }
    inputdata.close();
    outputdata.close();

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