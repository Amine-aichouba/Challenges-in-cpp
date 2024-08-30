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

bool is_prime ( int number )
{
    if ( number <= 1 )
        return false ;
    else
        { 
            for ( int i = 2 ; i <= ( number / 2 ) ; i ++ )
                {
                    if ( number % i == 0 )
                        return false ;
                }
        }
        return true ;
}

int main ()
{
    int number ;

    clear_screen () ; 

    cout << "\n\n\n\t\t * Give me the number : " ; 
    cin >> number ;
   
    if ( is_prime ( number ) == true )
        cout << "\n\t\t * The number " << number << " is a prime number !" << endl ;
    else
        cout << "\n\t\t * The number " << number << " is not a prime number !" << endl ;
    return 0 ;
}
