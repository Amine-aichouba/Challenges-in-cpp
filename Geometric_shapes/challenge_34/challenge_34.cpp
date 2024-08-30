#include <iostream> 

using namespace std;

int main () 
{
    int Height , R ;

    do 
        {
            system ( "clear" ) ;
            cout << "\n\n" ;
            cout << "\t\t * " << "Give the height of the shape : " ;
            cin >> Height ;

        } while ( Height <= 0 && Height % 2 == 0 ) ;

    cout << "\n\n\t\t * " << "The shape : " << "\n\n\n" ;
    
    R = Height / 2 ;

    for ( int i = 0 ; i < Height ; i ++ )
        {
            cout << "\t\t\t\t\t" ;

            for ( int j = 0 ; j < Height ; j ++ )
                {
                    if ( ( j == 0 && i != R ) || ( j == Height - 1 && i != R ) || ( i == R - 1  && j != R ) || ( j == i && j != R && i != R ) || ( i == R + 1 && j != R ) || ( j == Height - i - 1 && i != R ) ) 
                        cout << "• " ;
                    else 
                        cout << "  " ;
                }
            cout << endl ;
        }
    
    return 0 ;
} 