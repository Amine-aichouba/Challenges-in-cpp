#include <iostream>

using namespace std;

int main ()
{
    int Width , Length ;
    do
        {
            system ( "clear" ) ;
            cout << "\n\n" ;
            cout << "\t\t * " << "Give the width of the quadruple : " ;
            cin >> Width ;
            cout << "\n\t\t * " << "Give the length of the quadruple : " ;
            cin >> Length ;

        } while ( Length <= 0 || Width <= 0 ) ; 

    cout << "\n\n\t\t * " << "The quadruple : " << "\n\n\n" ;
    
    for ( int i = 0 ; i < Width ; i ++ )
        {
            cout << "\t\t\t\t\t" ;
            cout << "• " ;
            for ( int j = 0 ; j < Length - 2 ; j ++ )
                {
                    if ( i == 0 || i == Width - 1 )
                        cout << "• " ;
                    else 
                        cout << "  " ;
                }
            cout << "• " ;
            cout << endl ;
        }

    return 0 ;
}