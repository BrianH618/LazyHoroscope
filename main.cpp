//Authors:
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
    int lucky;
    string first;
    string lastname;
    int len;

  //get user input
  cout<< "What is your first name?\n";
  cin>> first;

  cout<< "What is your last name?\n";
  cin>>lastname;
    
  string word1 = first;
  string word2 = lastname;
  char letter = first[0];
  cout<< "Welcome, "<<word1[0] <<"."<<word2[0]<<".," <<" here is your fortune...\n";
  //tell fortune
  
  lucky = first.length();
  
  len = lastname.length();
  char last = word2[len-1];
  
  cout<< "your lucky number is "<< lucky<<endl;
  
  if (
  word1[0] == 'a'|| word1[0] =='e'
  ||word1[0] =='i'||word1[0] =='o'
  ||word1[0] =='A'||word1[0] =='E'||word1[0] =='I'
  ||word1[0] =='O'||word1[0] =='u'||word1[0] =='U'
  )
  {
    cout<<"you are destined to be famous!\n";
  }
  else 
  {
    cout<<"you should keep a low profile.\n";
  }
  
  if(word2[len-1]== 'a' || word2[len-1]== 'e' || word2[len-1]== 'i' || word2[len-1]== 'o' || word2[len-1]=='u' 
  ||  word2[len-1]=='A' || word2[len-1]=='E' || word2[len-1]=='I' || word2[len-1]== 'O' ||word2[len-1] == 'U')
  {
    cout<<"you have already met your true love.\n";
  }
  cout<<"have a good day!\n";

  return 0;
}
