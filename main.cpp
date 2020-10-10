#include <iostream>

using namespace std;

int main()
{
  string color1;
  int point=0;

  //first picture used
  do
  {
  cout << "First question. What color do you see out of these two?" << endl;
  cin >> color1;
  

  if (!((color1 == "red" ) || ( color1 == "green" )))
   {
    //error
    cout << "You didn't pick between the two colors." << endl ;
   }
  }

  //repeats if wrong
  while (!((color1 == "red" ) || ( color1 == "green" )));

  //output of pic 1
  if ((color1 == "red" ) || ( color1 == "green" ))
  {
    cout << "You get a point." << endl; 
  }

  //second picture
  do
  {
  cout << "Second question. What color do you see out of these two?" << endl;
  cin >> color1;
  

  if (!((color1 == "purple" ) || ( color1 == "green" )))
   {
    //error
    cout << "You didn't pick between the two colors." << endl ;
   }
  }

  //repeats if wrong
  while (!((color1 == "purple" ) || ( color1 == "green" )));

  //output of pic 2
  if ((color1 == "purple" ) || ( color1 == "green" ))
  {
    cout << "You get a point."; 
  }
  
  return 0;
}
