#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    union
     {short k;
      char i[2];
     } s;


s.i[0]=0x39;s.i[1]=0x38;
int a=int(&(s.i[0]));
int b=int(&(s.i[1]));

cout<<hex<<s.k<<'\n'<<a<<" "<<b;
return 0;
}
