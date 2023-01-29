#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  
  const double DISTANCE_FACTOR= 0.5 * 9.8;
  int fallTime, height;
  double distanceFallen; 
  
  cout << "Please input the time of fall in seconds:";
  cin >> fallTime;

  cout << "Please input the height of the bridge in meters:";
  cin >> height;

  for (int  i = 0; i <= fallTime; i++) {
    distanceFallen = (i * i) * DISTANCE_FACTOR;

    cout << fixed << showpoint << setprecision(2);
    cout << i << " " << distanceFallen << endl; 
  }
  return 0;
}