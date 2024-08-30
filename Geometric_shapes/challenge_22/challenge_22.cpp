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

        for ( int j = 0 ; j < Height ; j ++ )
            {
                if ( i > Height/2 && j < Height/2 )
                  cout << "  " ;
                if ( ( i < Height/2 && j >= Height/2 ) || ( i == Height/2 ) || ( i > Height/2 && j >= Height/2 ) )
                    cout << "• " ;
            }
        cout << endl ;
    }

    return 0 ;
}