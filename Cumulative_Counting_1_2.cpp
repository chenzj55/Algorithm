//question 1-2
//Created by AbuEgg on 19/12/2020

//AbuEgg stacks n cards on the side of the table and stretches out the table 1/2+1/3+……+1/(n+1)

//INPUT: (1.00, 3.71, 0.04, 5.19, 0.00)T, [0.001, 5.20], 0.00 means the end
//OUTPUT: (3 card(s), 61 card(s), 1 card(s), 273 card(s))T

//KNOWLEDGE: fstream for operations on files
//KNOWLEDGE: iostream for I/O
//KNOWLEDGE: using namespace std; IMPLICIT NONE???
//KNOWLEDGE: endl to end the line, change the line, '\n'
//KNOWLEDGE: cout input to the screem
//KNOWLEDGE: return 0 to end the program

//KNOWLEDGE: double should be calculated and initialized with a decimal point ".".
//KNOWLEDGE: non-integer default is double

#include <fstream>
#include <iostream>

using namespace std;

int AbuEgg1_2(double c)
{
    int n = 1;
    double length = 0.00;
    while (length < c)
    {
        length += 1.00 / (n + 1);
        n++;
    }
    return n - 1;
}

int main()
{
    ifstream inputdata("input.txt");
    ofstream outputdata("output.txt");
    double c;
    inputdata >> c;
    while (c > 0)
    {
        int result = AbuEgg1_2(c);
        outputdata << result << " card(s)" << endl;
        //cout << N << " " << result << endl;
        inputdata >> c;
    }
    inputdata.close();
    outputdata.close();
    return 0;
}