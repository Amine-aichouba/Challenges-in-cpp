#include <iostream>

using namespace std;

void clear_screen ()
{
    #ifdef _WIN32
        system ( "cls" ) ;
    #else
        system ( "clear" ) ;
    #endif
}

int main ()
{
    int a , b , c , big ;
    
    clear_screen () ;

    cout << "\n\n\n\t\t * Give me the first number : " ; 
    cin >> a ;
    cout << "\n\t\t * Give me the second number : " ; 
    cin >> b ;
    cout << "\n\t\t * Give me the third number : " ; 
    cin >> c ;
   
    if ( a > b && a > c )
        big = a ;      
    else 
        big = b ;

    if ( big < c ) 
        big = c ;

    cout << "\n\n\t\t * The largest number is : " << big << endl ;

    return 0 ;
}
