#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i,x[6],y[6], done = 0;
    double d = 0, t = 0;

 for(i=1; i<=5; i++)
 {
     cout<<"X["<<i<<"]="; cin>>x[i];
     cout<<"Y["<<i<<"]="; cin>>y[i];
     cout<<endl;
 }

    cout << "Drum ales: " << endl;

    char o;

    int X = x[1], Y = y[1], ocx, ocy;

    while(done == 0)
        {
        cin >> o;

        switch (o){
        case 'a':
            ocx = x[1];
            ocy = y[1];
            d = sqrt((X - ocx)*(X - ocx) + (Y - ocy)*(Y - ocy));
            break;
        case 'b':
            ocx = x[2];
            ocy = y[2];
            d = sqrt((X - ocx)*(X - ocx) + (Y - ocy)*(Y - ocy));
            break;
        case 'c':
            ocx = x[3];
            ocy = y[3];
            d = sqrt((X - ocx)*(X - ocx) + (Y - ocy)*(Y - ocy));
            break;
        case 'd':
            ocx = x[4];
            ocy = y[4];
            d = sqrt((X - ocx)*(X - ocx) + (Y - ocy)*(Y - ocy));
            break;
        case 'e':
            ocx = x[5];
            ocy = x[5];
            d = sqrt((X - ocx)*(X - ocx) + (Y - ocy)*(Y - ocy));
            break;
        default:
            done = 1;
            d = 0;
            break;
        }

        X = ocx;
        Y = ocy;
        t = t + d;
    }

    cout << "Distanta totala:" << t << endl;

    return 0;
}
