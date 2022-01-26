//code_by_shivraj_pisal
// armstrong number(where n=no. of digits; abcd(here n=4)= a^n + b^n + c^n + d^n);

#include<iostream>
using namespace std;
    
int main()
{int i,n,sum=1,rem=0,result=0,digit=0;
cout<<"enter any number";
cin>>n;

// get number of digits
int org=n;
while(n>0)
{
    n=n/10; 
    digit++;
}

if(digit==1)
{
    cout<<"its an armstrong number :)";
}
else{
 n=org;

while(n>0)
{    rem=0;
    rem+=n%10;
    n=n/10;

for(i=digit/2;i>0;i--)
   {   
       if(digit%2==0){
       sum*=rem*rem;
   }
   else
   {
       sum*=rem*rem;
      
       if(i==1)
       {
           sum*=rem;
       }
         }
   }
   result+=sum;
   sum=1;
}

if(result==org)
{
    cout<<"its armstrong number :)";
}
else{
    cout<<"not an armstrong number :(";
}
}
return 0;

// printing +ve number from right to left(reversing number);
// while(n>0)
// {
//    rem=n%10;
//    cout<<rem<<endl;
//    n=n/10;
// }
}