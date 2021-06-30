// cpp tutorial 5 
// concept -> data type overflows 
// if we are tries to put the value in the container greater than maximum value , it will over flow
// like that value > than max value of the datatype , moves in clock wise , max to min .
// eg : -1,0,1 ; max ->1 , if you enter 2 , the result will be -1

#include<iostream>
using namespace std;

int main()
{

    int intMax = INT32_MAX;
    cout <<"intMax value is-> "<<intMax<<endl;
    cout <<"intMax +1 value is-> "<<intMax+1<<endl;
}