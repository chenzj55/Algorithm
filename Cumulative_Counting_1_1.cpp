//question 1-1
//Created by AbuEgg on 18/12/2020

//AbuEgg can get N gold coins on the Nth day

//INPUT: (10, 6, 7, 11, 15, 16, 100, 10000, 1000, 21, 22, 0)T, max 21 numbers, 1~10000, 0 means the end
//OUTPUT: (10 30, 6 14, 7 18, 11 35, 15 55, 16 61, 100 945, 10000 942820, 1000 29820, 21 91, 22 98)T

//KNOWLEDGE: fstream for operations on files
//KNOWLEDGE: iostream for I/O
//KNOWLEDGE: using namespace std; IMPLICIT NONE???
//KNOWLEDGE: endl to end the line, change the line, '\n'
//KNOWLEDGE: cout input to the screem
//KNOWLEDGE: return 0 to end the program

#include <fstream>
#include <iostream>

using namespace std;

int AbuEgg1_1(int N)
{
    int coins = 0, k = 1, days = 0;
    while (days + k <= N)
    {
        coins += k * k;
        days += k;
        k++;
    }
    int j = N - days;
    coins += j * k;
    return coins;
}

int main()
{
    ifstream inputdata("input.txt");
    ofstream outputdata("output.txt");
    int N;
    inputdata >> N;
    while (N)
    {
        int result = AbuEgg1_1(N);
        outputdata << N << " " << result << endl;
        //cout << N << " " << result << endl;
        inputdata >> N;
    }
    inputdata.close();
    outputdata.close();
    return 0;
}
