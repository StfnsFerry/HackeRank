#include <iostream>

using namespace std;

    int max_of_four(int a, int b, int c, int d){
        return max(max(a,b),max(c,d));
        
    }
    
int main(){
    
    int a , b , c, d ;
    
    cin>> a;
    cin>> b;
    cin>> c;
    cin>> d;
        
    int ans = max_of_four(a,b,c,d);
    cout<<ans;
    
    return 0;
}


