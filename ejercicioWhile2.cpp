#include <iostream>

using namespace std;

int main()
{
    int i = 1, m = 12, r = 0;
    
    while(i<=12){
        r = i * m;
        
        cout <<"12 x "<< i << " = " << r  <<"\n";
        
        i++;
    }

    return 0;
}