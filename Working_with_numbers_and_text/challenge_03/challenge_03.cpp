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
    int Number , Rest , Y , X = 0 ;
    do
        {
            clear_screen () ;
            cout << "\n\n" ;
            cout << "\t\t * " << " Give me a loving number : " ;
            cin >> Number ;
        } while ( Number < 0 ) ;
   
    Y = Number ;
     
    while ( Number != 0 )
        {
           Rest = ( Number % 10 ) ;
           X = X * 10 + Rest ;
           Number /= 10 ;
        }
    if ( Y == X )
        cout << "\n\n\t\t * " << "The number " << Y << " is symmetrical " ;
    else 
        cout << "\n\n\t\t * " << "The number " << Y << " is not symmetrical " ;
    cout << endl ;
    
    return 0 ;
}
 