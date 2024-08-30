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

        } while ( Height <= 0 || Height % 2 == 0 ) ; 
        cout << "\n\n\t\t * " << "The quadruple : " << "\n\n\n" ;

    for ( int i = 0 ; i < Height ; i ++ )
        {
            cout << "\t\t\t\t\t" ;
            cout << "• " ;
            for ( int j = 1 ; j < Height - 1 ; j ++ )
                {
                    if ( i == Height / 2 || j == Height / 2 || i == 0 || i == Height - 1 )
                        cout << "• " ;
                    else 
                        cout << "  " ; 
                }
            cout << "• " ;
            cout << endl ;
        }
   
    return 0 ;
}