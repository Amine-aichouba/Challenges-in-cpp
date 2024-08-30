#include <iostream>

using namespace std ;

int main ()
{
    int Height ;
    do
        {
            system ( "clear" ) ;
            cout << "\n\n" ;
            cout << "\t\t * " << "Give the height of the triangle : " ;
            cin >> Height ;
        
        } while ( Height <= 0 ) ;
  
    cout << "\n\n\t\t * " << "The triangle : " << "\n\n\n" ;
    
    for ( int i = 0 ; i < Height ; i ++ )
        {
            cout << "\t\t\t\t\t" ;
            for ( int k = 0 ; k < Height ; k ++ )
                {
                    if ( i > k )
                        cout << "  " ;
                    else
                        continue ;
                }
            for ( int j = 1 ; j < Height - i ; j ++ )
                cout << "• " ;
            
            for ( int t = 1 ; t < Height - i + 1 ; t ++ )
                cout << "• " ;
            
            cout << endl ;    
        }
/*
    for ( int i = 1 ; i <= Height ; i ++ )
        {
            cout << "\t\t\t\t\t" ;
            for ( int k = 1 ; k < i ; k ++ )
                cout << "  " ;

            cout << "* " ;
            for ( int j = 1 ; j <= ( Height * 2 ) - ( i * 2 ) ; j ++ )
                cout << "• " ;

            cout << endl ;
        }
*/
    return 0 ;
}
