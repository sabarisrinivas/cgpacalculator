//University CGPA Calculator
#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cout << "Enter No of Subject"<<endl;
  cin >> n;
  int a[n];
  int b[n];
  for (int i=0;i<n;i++)
  {
    cout << "Enter Grade points for Subject "<<i+1<<endl;
    cin >> a[i];
    cout << "Enter the no of Credit Alloted for Subject "<<i+1<<endl;
    cin >> b[i]; 
  }

  float sigmamarks = 0 , sigmacredits = 0;

  for (int i=0;i<n;i++)
  {
    sigmamarks += a[i]*b[i];
    sigmacredits += b[i];
  }

  float cgpa;
  cgpa = sigmamarks/sigmacredits;
  cout << cgpa << endl;
  cout << "Thank You" << endl;
}
