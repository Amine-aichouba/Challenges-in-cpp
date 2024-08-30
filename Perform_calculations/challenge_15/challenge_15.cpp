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

double sum ( int number )
{
    if ( number == 0 )
        return 0 ;
    else 
        return ( double )  ( number * number ) / ( number + 1 ) + sum ( number - 1 ) ;
}

int main ()
{
    int number ;

    do
        {
            clear_screen () ;
            cout << "\n\n\n\t\t * Give me a number greater than zero : " ;
            cin >> number ;

        } while ( number <= 0 ) ;

    cout << "\n\n\t\t * Sum :" ;
    for ( int i = 1 ; i <= number ; i ++ )
        cout << " [ ( " << i << " × " << i << " ) ÷ " << i + 1 << " ] " << ( ( i < number ) ? " + " : " " ) ;
       
    cout << "= " << sum ( number ) << endl ;

    return 0 ;
}
