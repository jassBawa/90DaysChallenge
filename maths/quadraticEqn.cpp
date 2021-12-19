#include <iostream>
#include <math.h>
using namespace std;

void quadraticEqn(int a, int b, int c)
{
    float x1, x2;
    int d = b * b - 4 * a * c;
    cout << "\nDiscriminant is = " << d << endl;
    if (d > 0)
    {
        cout<<"Roots are real and different: "<<endl;
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout <<"Roots = " << x1 << ", " << x2 << endl;
    }
    else if(d==0){
        cout<<"Roots are real and equal"<<endl;
        x1 = (-b + sqrt(d)) / (2 * a);
        cout <<"Root is = " << x1 << endl;
    }
    else if (d < 0)
    {
        cout<<"Roots are imaginery and different"<<endl;
        x1 = (-b) / (2 * a);
        x2 = sqrt(abs(d)) / (2 * a);
        cout << "Root 1 = " << x1 << " + " << x2 << "i" << endl;
        cout << "Root 2 = " << x1 << " - " << x2 << "i" << endl;
    }
}

int main()
{
    int a, b, c, result;
    cout << "Enter the value of a, b and c: ";
    cin >> a >> b >> c;
    quadraticEqn(a, b, c);

    return 0;
}