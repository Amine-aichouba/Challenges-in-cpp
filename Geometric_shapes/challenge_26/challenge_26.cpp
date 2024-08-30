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
    
    for ( int i = 0 ; i < Height ; i -=- 1 )
        {   
            cout << "\t\t\t\t\t" ;

           for ( int j = 0 ; j < Height ; j ++ )
               {
                    if ( i == j )
                        cout << "• " ;
                    if ( i > j )
                        cout << "0 " ;
               }
            for ( int t = 1 ; t < Height - i ; t ++ )
                cout << "1 " ;

            cout << endl ;
        }

    return 0 ;
}
