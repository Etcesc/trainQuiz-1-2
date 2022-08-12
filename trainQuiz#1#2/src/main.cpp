#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
int aleatorio();

void printarray (int arg[], int length) {
  for (int n=0; n<length; ++n)
    cout << arg[n] << ' ';
  cout << '\n';
  }

int main()
{
    const int N = 10; // cantidad de vagones en el tren
    const int A = 40; // cantidad de asientos por vagon
    int train[A*N];
    int frontseats[] = {5, 10, 15, 18, 19, 23, 15, 31, 33, 37};
    int backseats[] = {124, 115, 111, 108, 100, 97, 94, 89, 88, 76};



    cout << "\n\nFirst 10 available seats in the front of the train: " << endl;
    printarray (frontseats,10);

    cout << "\n\nLast 10 available seats in the back of the train: " << endl;
    printarray (backseats,10);
    
    cout << "\n\nTotal amount of seats in the train:  " << N*A << endl << endl;
 
    return 0;
}