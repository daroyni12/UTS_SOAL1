#include <iostream>
using namespace std;

int main()
{
    int x,y,a,b,progres;
    cout << " Masukan nilai A : ";
    cin >>a;
    cout << " Masukan nilai B : ";
    cin >>b;
    progres=true;
    x=a;
    y=b;

    while (progres)
    {
        if (x!=y)
        {
            if (x<y)
            {
                x=x+a;
            }
            else
            {
                y=y+b;
            }

        }
        else
        {
            progres=false;
        }

    }
    cout << x;

}
