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

int factor ( int number )
{
    if ( number == 1 )
        return 1 ;
    else
        return  number * factor ( number - 1 ) ;
}

int main ()
{
    int number ;
    double sum_s = 0 , sum_t = 0 ;

    do
        {
            clear_screen () ;
            cout << "\n\n\n\t\t * Give me a number greater than zero : " ;
            cin >> number ;

        } while ( number <= 0 ) ;

    cout << "\n\n\t\t * Sum S : " ;

    for ( int i = 1 ; i <= number ; i ++ )
        {
            if ( i % 2 == 1 )
                {
                    cout << i << "!" << ( ( i < number - 1 ) ? " + " : " = " ) ;
                    sum_s += ( double ) factor ( i ) ; 
                }
        }
       
    cout << sum_s ;

    cout << "\n\n\t\t * Sum T : " ;

    for ( int i = 1 ; i <= number ; i ++ )
        {
            if ( i % 2 == 0 )
                {
                    cout << i << "!" << ( ( i < number - 1 ) ? " + " : " = " ) ;
                    sum_t += ( double ) factor ( i ) ; 
                }
        }
       
    cout << sum_t << endl ;

    return 0 ;
}
