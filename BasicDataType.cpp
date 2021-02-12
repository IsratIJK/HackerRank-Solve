#include <iostream>
#include <cstdio>
#include <iomanip> 
using namespace std;

int main() {
    int n;
    long l;
    char ch;
    float f;
    double d;
    cin>>n>>l>>ch>>f>>d;
    cout<<n<<endl<<l<<endl<<ch<<endl;
    cout << std::fixed << std::setprecision(3) << f<<endl;
    cout << std::fixed << std::setprecision(9) << d<<endl;
    
   
    return 0;
}