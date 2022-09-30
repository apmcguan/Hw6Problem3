#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;
  
double powerGen (double H, double Q);
int main() {
 
  double p, H, Q;
  p = powerGen(H, Q);
  cout<<p<<endl;
  


  //Value for flow rae of 20 and head distance of 14 is = 273856 watts
  //
    
  }
  
  
  
  double powerGen (double H, double Q)
{
  cout<<"Enter value for volume flow rate (m3/s):"<<endl;
  cin>>Q;
  cout<<"Enter value for head distance (m)"<<endl;
  cin>>H;
  double P = ((997)*(Q)*(H)*(9.81));
  cout<<"The power generated (watts) is "<<P<<endl;
  return P;

  }
  

    
    
    
  
  
  

  

