#include <iostream>

using namespace std;

int main ()
{
    int Height ;
    do
        {
            system ( "clear" ) ;
            cout << "\n\n" ;
            cout << "\t\t * " << "Give the height of the quadruple : " ;
            cin >> Height ;

        } while ( Height <= 0 ) ; 

    cout << "\n\n\t\t * " << "The quadruple : " << "\n\n\n" ;
    for ( int i = 0 ; i < Height ; i ++ )
        {
            cout << "\t\t\t\t\t" ;
            cout << "• " ;
            for ( int j = 0 ; j < Height - 2 ; j ++ )
                {
                    if ( i == 0 || i == Height - 1 )
                        cout << "• " ;
                    else 
                        cout << "  " ;
                }
            cout << "• " ;
            cout << endl ;
        }

    return 0 ;
}