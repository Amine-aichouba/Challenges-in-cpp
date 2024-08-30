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

int main ()
{
    clear_screen () ;

    cout << "\n\n\n\t\t * Times tables 1 through 10 :" << endl ;

    for ( int i = 1 ; i <= 10 ; ++ i )
        {
            cout << "\n\t\t * Multiplication table of the number : " << i << endl ; 
            for ( int  j = 1 ; j <= 10 ; j ++ )
                cout << "\n\t\t • " << i << " × " << j << " = " << i * j << endl ;
        }

    return 0 ;
}
