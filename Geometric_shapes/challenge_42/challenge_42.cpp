#include <iostream> 

using namespace std;

int main () 
{
    int Number ;

    do 
        {
            system ( "clear" ) ;
            cout << "\n\n" ;
            cout << "\t\t * " << "Give a number greater than zero : " ;
            cin >> Number ;

        } while ( Number <= 0 ) ;

        cout << "\n\n\t\t * " << "The shape : " << "\n\n\n" ;
    
        for ( int i = 1 ; i <= Number * 2 ; i ++ )
            {
                cout << "\t\t\t\t\t" ;

                for ( int j = 1 ; j <= Number * 2 ; j ++ )
                    {
                        if ( i <= Number )
                            cout << i << " " ;
                        else 
                            cout << Number * 2 - i + 1 << " " ;
                    }   

                cout << endl ;
            }

    return 0 ;
} 
