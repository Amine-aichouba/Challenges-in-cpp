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
                        if ( ( i == 0 && j != R ) || ( i == Height - 1 && j != R ) || ( i == R - 1 && j != R ) || ( i == R + 1 && j != R ) || ( j == 0 && i != R ) || ( j == Height - 1 && i != R ) || ( j == R - 1 && i != R ) || ( j == R + 1 && i != R ) )
                            cout << "• " ;
                        else 
                            cout << "  " ;
                    }
                cout << endl ;
            }

    return 0 ;
} 

