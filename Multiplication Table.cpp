//Program to print multiplication table of a number in C++

#include <iostream>>
using namespace std;

int main()
{
    int a,i=1;
    cout << "Enter the number\n" << endl;
    cin >> a,i;

    cout << "\nMultiplaction table of\n" << endl;

    while(i<=10)
    {
        cout << "\n" << (a*i) << endl;
        i++;
    }
return 0;
}
