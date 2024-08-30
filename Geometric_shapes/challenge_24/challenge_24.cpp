#include <iostream>

using namespace std;

int main ()
{
    int Height , R ;

    do
    {
        system ( "clear" ) ;
        cout << "\n\n" ;
        cout << "\t\t * " << "Give the height of the quadruple : " ;
        cin >> Height ;

    } while ( Height <= 0 || Height % 2 == 0 ) ;

    cout << "\n\n\t\t * " << "The quadruple : " << "\n\n\n" ;
    
    R = Height / 2 ; 
    
    for ( int i = 0 ; i < Height ; i -=- 1 )
        {   
            cout << "\t\t\t\t\t" ;

            if ( i <= R )
                {
                    for ( int j = 0 ; j < Height ; ++ j )
                        {
                            if ( ( j == R ) ||  ( i == 0 && j > R - 1 ) || ( i == R ) || ( j == Height - 1 ))
                                cout << "• " ;
                            else 
                                cout << "  " ;
                        }
                    cout << endl ;                  
                }
             
            if ( i > R )
                {
                    for ( int t = 0  ; t < Height ; t += 1 )
                        {
                            if ( ( t == 0 ) || ( t == R ) || ( i == Height - 1 && t < R ) )
                                cout << "• " ;
                            else 
                                cout << "  " ;
                        }
                    cout << endl ;
                }
        }

    return 0 ;
}

