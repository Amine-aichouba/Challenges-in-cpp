#include <iostream>

using namespace std ;

void clear_screen ()
{
    #ifdef _WIN32
        system ( "cls" ) ;
    #else
        system ( "clear" ) ;
    #endif
}

double square_root ( double number )
{
    double guess = number / 2.0 ;
    
    if ( number == 0 || number == 1 ) 
        return ( double ) number ;

    for ( int i = 0 ; i < 100 ; i ++ )
        guess = 0.5 * ( guess + number / guess ) ;

    return ( double ) guess ;
}

int main ()
{
    double number ;

    do
        {
            clear_screen () ;
            cout << "\n\n\n\t\t * Give me a positive number : " ;
            cin >> number ;

        } while ( number < 0 ) ;

    cout << "\n\t\t * The square root of " << number <<" is : √" << number ;
    cout << " = " << square_root ( number ) << endl ;

    return 0 ;
}
