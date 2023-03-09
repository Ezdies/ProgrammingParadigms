#include <iostream>

using namespace std;

int potega(int podst, int wykl){
    if(wykl==1) return podst;
    else if(wykl%2==1) return podst*potega(podst, wykl-1);
    return potega(podst, wykl/2)*potega(podst, wykl/2);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<potega(a,b);
    return 0;
}