#include <iostream>
#include "myclass.h"
using namespace std;

int main()
{
    myclass a(10, 10, 10), b, c, d;
    double m;
    b.input();
    c=b.plus(a);
    d=b.minus(a);
    b.mod();
    c.show();
    d.show();
    return 0;
	//1362165497
}


