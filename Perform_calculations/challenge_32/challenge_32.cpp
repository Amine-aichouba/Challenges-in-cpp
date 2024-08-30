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
            if ( i % 2 == 0 )
                {
                    cout << " + ( " << i << " + " << i + 1 << "! )" ;
                    sum += ( double ) i + factor ( i + 1 ) ; 
                }
                else
                    {
                        cout << " - ( " << i << " + " << i + 1 << "! )"  ;
                        sum -= ( double ) i + factor ( i + 1 ) ; 
                    }
        }
       
    cout << " = " << sum << endl ;

    return 0 ;
}