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

int main ()
{
    int number , sum = 0 ;
    
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
                    cout << " + "  << i ;
                    sum += i ;
                }
                else
                    {
                        cout << " - " << i ;
                        sum -= i ;
                    }
        }
    
    cout << " = " << sum << endl ;
    
    return 0 ;
}
