#include<iostream>
using namespace std;
int vol(float l,float h,float w);
main(){
float height,width,length;
double volume;
string out;
cout<<"Enter the length of pyramid (in meters): ";
cin>>length;
cout<<"Enter the width of pyramid (in meters): ";
cin>>width;
cout<<"Enter the heigth of pyramid (in meters): ";
cin>>height;
cout<<"Enter the desired output unit (millimeters,centimeters,meters,kilometers): ";
cin>>out;
volume=vol(length,width,height);
cout<<"The volume of the pyramid is: "<<volume<<" cubic "<<out;
}
int vol(float l,float h,float w)
{double volume;
volume=(l*h*w)/3;
return volume;
}