#include <iostream>

using namespace std;

int main()
{
    char calculator_demo;
    int fn = 0;
    cout << "Type first nuber:";
    cin >> fn;

    int sn = 0;
    cout << "Type second number:";
    cin >> sn;

   cout << "Enter operation: ";
    cin >> calculator_demo;

    switch (calculator_demo){
    case '1':
        cout <<  fn - sn;
        break;
    case '2':
        cout << fn + sn;
        break;
    case '3':
        cout << fn * sn;
        break;
    case '4':
        cout << fn / sn;
        break;
    default:
        cout << "Error\n";
    }

}
