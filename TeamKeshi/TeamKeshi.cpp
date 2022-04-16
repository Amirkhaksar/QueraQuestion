#include<iostream>
using namespace std ;

int main () {

int a , b , t , max = 0 ;

for ( int i = 0 ; i < 3 ; i++ ){
    cin >> a ;
    t=a ;
    cin >> b ;
    if ( b < a ) t = b ;
    max = max + t ;

}

cout << max ;
return 0 ;

}
