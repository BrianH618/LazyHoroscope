//Authors:
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
    string first;
    string lastname;
  //get user input
  cout<< "What is your First name?\n";
  cin>> first;

  cout<< "What is your Last name? \n";
  cin>>lastname;
    
  string word1 = first;
  string word2 = lastname;
  cout<< "Welcome, "<<word1[0] <<"."<<word2[0]<<"." <<" here is your fortune...";

  cout<<endl;
  //tell fortune

  return 0;
}
