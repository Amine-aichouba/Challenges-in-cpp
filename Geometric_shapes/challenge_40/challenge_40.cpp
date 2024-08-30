#include <iostream> 

using namespace std;

int main () 
{
    int Height ;

    do 
        {
            system ( "clear" ) ;
            cout << "\n\n" ;
            cout << "\t\t * " << "Give the height of the shape : " ;
            cin >> Height ;

        } while ( Height <= 0 ) ;

        cout << "\n\n\t\t * " << "The shape : " << "\n\n\n" ;
    
        for ( int i = 1 ; i <= Height ; i ++ )
            {
                cout << "\t\t\t\t\t" ;

                for ( int j = 1 ; j <= Height ; j ++ )
                    {
                        if ( j % 2 == 0 )
                            cout << "0 " ;
                        else 
                            cout << "1 " ;
                    }
                cout << endl ;
            }

    return 0 ;
} 
