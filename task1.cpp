#include<iostream>
using namespace std;
int value_1 =10;
int value_2 =20;

int sum ()
{
value_1 =40;
return value_1+value_2;
}
main()
{
int x=value_1;
value_1=100;
x=20;
value_2=sum();
cout<<value_1<<" "<<value_2;
}