#include <iostream>
using namespace std;
#include <cmath>

int main() {
    float a;
    cin>>a;
   int b = static_cast<int>(a);
   cout<<b;
   cout<<" ";
   cout<<(a-b)*100;
}
