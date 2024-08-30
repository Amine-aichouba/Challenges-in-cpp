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
        return number * factor ( number - 1 ) ;
}

int power ( int number , int exponent )
{
    if ( exponent == 1 )
        return number ;
    if ( exponent == 0 )
        return 1 ;
    else
        return number * power ( number , exponent - 1 )  ;
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
                    cout << " - [ ( " << i << "^" << i << " ) ÷ " << i << "! ]" ;
                    sum -= ( double ) power ( i , i ) / factor ( i )   ; 
                }
                else 
                    {
                        cout << " + [ " << i << "! ÷ ( " << i << "^" << i << " ) ]" ;
                        sum += ( double ) factor ( i ) / power ( i , i ) ;
                    }
        }
       
    cout << " = " << sum << endl ;

    return 0 ;
}
