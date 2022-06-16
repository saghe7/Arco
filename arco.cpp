#include <iostream>

using namespace std;

void arco(int x, int y){

    if (x>0 && x<732 && y>0 && y<232)
    {
        cout <<"GOL";
    }
    else if (x==0 && y<=232)
    {
        cout <<"PALO";
    }
    else if (x==732 && y<=232)
    {
        cout <<"PALO";
    }
    else if (x<=732 && y==232)
    {
        cout <<"PALO";
    }
    
    else
    {
        cout <<"AFUERA";
    }
    
    

}

int main()
{
    int a;
    int b;
    
    cin>>a;
    cin>>b;
    arco(a,b);

    return 0;
}