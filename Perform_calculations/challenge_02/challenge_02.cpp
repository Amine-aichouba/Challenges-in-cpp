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

int multiplication ( int number )         
{
    if ( number == 1 )
        return 1 ;
    else 
        return number * multiplication ( number - 1 ) ; 
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

    cout << "\n\n\t\t * sum : " ;

    for ( int i = number ; i >= 1 ; i -- )
        cout << i << ( ( i > 1 ) ? " × " : " " ) ;
            
    cout << "= " << multiplication ( number ) << endl ;

    return 0 ;
}
