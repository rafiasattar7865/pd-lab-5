#include<iostream>
using namespace std;
float tax calculator(char v_t,float price;
main()
{
char v_t;
float price,final price,tax_amount;
cout<<"Enter the vehical type code(M, E, S, V, T): ";
cin>>v_t;
cout<<"Enter the price of the vehicle: $";
cin>>"price;
tax_amount=tax calculator(v_t,price);
final_price=price+tax_amount;
cout<<"The final price of a vehicle of type "<<v_t<<" after adding the tax is $<<final_price;
}
float tax calculator(chat v_t,float price)
{float tax_amount;
 if(v_t==M)
tax_amount=price*(0.06/100);
 if(v_t==E)
tax_amount=price*(0.08/100);
if(v_t==S)
tax_amount=price*(0.10/100);
if(v_t==V)
tax_amount=price*(0.12/100);
if(v_t==T)
tax_amount=price*(0.15/100);
return tax_amount;


