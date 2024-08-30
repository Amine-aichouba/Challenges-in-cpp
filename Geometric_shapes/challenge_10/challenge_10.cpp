#include <iostream>

using namespace std;

int main ()
{
    int Height , The_rest;
    do
        {
            system ( "clear" ) ;
            cout << "\n\n" ;
            cout << "\t\t * " << "Give the height of the triangle : " ;
            cin >> Height ;
            The_rest = Height % 2 ;
        } while ( Height <= 0 || The_rest == 0 ) ;

    cout << "\n\n\t\t * " << "The triangle : " << "\n\n\n" ;
    
    for ( int i = 0 ; i < ( Height / 2 ) + 1 ; i ++ )
        {
            cout << "\t\t\t\t\t" ;
            for ( int j = 0 ; j < i ; j ++ )
                cout << "• " ;
            cout << endl ;
        }

    for ( int i = 0 ; i <= Height / 2 ; i ++ )
        {
            cout << "\t\t\t\t\t" ;
            for ( int j = 0 ; j <= ( Height / 2 ) - i ; j ++ )
                cout << "• " ;
            cout << endl ;
        }
        
    return 0 ;
}
