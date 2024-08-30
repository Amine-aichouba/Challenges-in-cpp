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

double sum ( double number )
{
    if ( number == 1 )
        return 1 ;
    else 
       return ( 1 / number ) + sum ( number - 1 ) ;    
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

    cout << "\n\t\t * Sum : " ;
    for ( int i = 1 ; i <= number ; i ++ )
         cout << "( 1 ÷ " << i << " )" << ( ( i < number ) ? " + " : " = " ) ;

    cout << sum ( number ) << endl ;
   
    return 0 ;
}
