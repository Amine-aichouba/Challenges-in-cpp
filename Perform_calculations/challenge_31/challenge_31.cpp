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

double factor ( int number )
{
    if ( number == 1 )
        return 1 ;
    else
        return ( double ) number * factor ( number - 1 ) ;
}

int main ()
{
    int number ;
    double sum = 0 ;

    do
        {
            clear_screen () ;
            cout << "\n\n\n\t\t * Give me a number greater than zero : " ;
            cin >> number ;

        } while ( number <= 0 ) ;

    cout << "\n\t\t * Sum :" ;

    for ( int i = 1 ; i <= number ; i ++ )
        {
            cout << " [ " << i << " ÷ ( " << i + 1 << " + " << i << "! ) ]" << ( ( i < number ) ? " +" : " = " ) ;
            sum += ( double ) i / ( ( i + 1 ) + factor ( i ) ) ;
        }
       
    cout << sum << endl ;

    return 0 ;
}
