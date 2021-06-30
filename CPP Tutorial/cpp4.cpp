// cpp tutorial 4 
// Data types -> int , float , double , char , bool , signed and unsigned of char , int , short int , long int 
// naming variables with -> camel casing format -> alphabetNumber , begins with small letter then new word begins with capital one 


#include<iostream>
using namespace std;

int main()
{
    int DOB = 1999;
    char Gender = 'f';
    bool Is_older_than_18 = true;
    float Average_IQ = 7.5;
    double bank_balance = 500000000;

    // space allocatation of each data type 

    // sizeof() -> find the memory used by each operator

    cout<<"Size of int -> "<<sizeof(int)<<" bytes"<<endl;

    cout<<"Int min value(64 bits)  is -> "<<INT64_MIN<<endl;
    cout<<"Int min value(32 bits ) is -> "<<INT32_MIN<<endl;
    cout<<"Int min value(16 bits ) is -> "<<INT16_MIN<<endl;
    cout<<"Int min value(8 bits )  is -> "<<INT8_MIN<<endl;
    cout<<"Int max value(64 bits)  is -> "<<INT64_MAX<<endl;
    cout<<"Int max value(32 bits ) is -> "<<INT32_MAX<<endl;
    cout<<"Int max value(16 bits ) is -> "<<INT16_MAX<<endl;
    cout<<"Int max value(8 bits )  is -> "<<INT8_MAX<<endl;

    //  INT_MIN and INT_MAX Values may vary from complier to complier , 
    // deponding on the complier to stores the integer values using 64 bits or 32 bits or 16 bits or 8 bits .

    //want to use positive inetgers only -> (unsigned int) datatype 32 bits

    cout<<"size of unsigned int -> "<<sizeof(unsigned int)<<" bytes"<<endl;
    cout<<"unsigned int max value -> "<<UINT32_MAX<<endl;
    
    // size of data types
    cout<<"size of char -> "<<sizeof(char)<<" bytes"<<endl;
    cout<<"size of unsigned char -> "<<sizeof(unsigned char)<<" bytes"<<endl;
    cout<<"size of signed char -> "<<sizeof(signed char)<<" bytes"<<endl;


    
    cout<<"size of int -> "<<sizeof(int)<<" bytes"<<endl;
    cout<<"size of unsigned int -> "<<sizeof(unsigned int)<<" bytes"<<endl;
    cout<<"size of signed int -> "<<sizeof(signed int)<<" bytes"<<endl;

    cout<<"size of short int -> "<<sizeof(short int)<<" bytes"<<endl;
    cout<<"size of unsigned short int -> "<<sizeof(unsigned short int)<<" bytes"<<endl;
    cout<<"size of signed short int -> "<<sizeof(signed short int)<<" bytes"<<endl;

    cout<<"size of long int -> "<<sizeof(long int)<<" bytes"<<endl;
    cout<<"size of unsigned long int -> "<<sizeof(unsigned long int)<<" bytes"<<endl;
    cout<<"size of signed long int -> "<<sizeof(signed long int)<<" bytes"<<endl;

    cout<<"size of float -> "<<sizeof(float)<<" bytes"<<endl;
    cout<<"size of double -> "<<sizeof(double)<<" bytes"<<endl;

    cout<<"size of bool -> "<<sizeof(bool)<<" bytes"<<endl;


    // 1 byte = 8 bit 
    
   






    
    




}