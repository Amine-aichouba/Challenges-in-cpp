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

                for ( int j = 0 ; j < Height ; j ++ )
                    {
                        cout << i << " " ;
                    }
                cout << endl ;
            }

    return 0 ;
}