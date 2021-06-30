// cpp tutorial 8
// if - else -> To find the type of the triangle whether it is a equilateral or isoceles or right angles triangle or scalene triangle .

#include<iostream>
using namespace std;
int main()
{
    int side1,side2,side3,angle1,angle2,angle3;
    cout<<"plaese enter the sides of the triangle -> ";
    cin>>side1>>side2>>side3;
    cout<<"\nplaese enter the Angles of the triangle -> ";
    cin>>angle1>>angle2>>angle3;

    if((side1==side2)||(side2==side3))
    {
       if((side1==side2)&&(side2==side3))   // Verification Equilateral
       {
            cout<<"Equilateral Triangle"<<endl;
       }
       else                                 // Verification Isoceles and its three types
       {
           if((angle1==90)||(angle2==90)||(angle3==90))
                cout<<"> Isoceles Right Angle Triangle"<<endl;
            else
            {
                if((angle1>90) ||(angle2>90)||(angle3>90))            
                    cout<<"> Isoceles Obtuse Angle Triangle"<<endl;
                else
                    cout<<"> Isoceles Acute Angle Triangle"<<endl;    
            }   
          
       }
    }
    else                                    //  Verification Scalene triangle   
    {
        if((angle1==90) || (angle2==90)||(angle3==90))
            cout<<"Scalene Right Angle Triangle"<<endl;
        else 
        {
            if((angle1>90) || (angle2>90)||(angle3>90))
                cout<<"Scalene Obtuse Angle Triangle"<<endl; 
            else 
                cout<<"Scalene Acute Angle Triangle"<<endl;      

        }   
        
    }

}