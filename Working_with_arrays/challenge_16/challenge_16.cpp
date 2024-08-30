#include <iostream>

using namespace std;

void clear_screen () 
{
    #ifdef _WIN32
        system ( "cls" ) ;
    #else
        system ( "clear" ) ;
    #endif
}

int main ()
{
    int** matrix ;
    int matrix_lines , matrix_columns ;


    do
        {
            cout << "\n\n\n\t\t * Give me the number of lines of the matrix : " ;
            cin >> matrix_lines ;
            cout << "\n\t\t * Give me the number of columns of the matrix : " ;
            cin >> matrix_columns ;

        } while ( matrix_lines <= 0 || matrix_columns <= 0 ) ;
    
    matrix = new int *[ matrix_lines ] ;
    for ( int i = 0 ; i < matrix_lines ; i ++ )
        matrix [i] = new int [ matrix_columns ] ;

    cout << "\n\t\t * Enter matrix items :" << endl ;
    for ( int i = 0 ; i < matrix_lines ; i ++ ) 
        {
            for ( int j = 0 ; j < matrix_columns ; ++ j )
                {
                    cout << "\n\t\t * T [" << i + 1 << "][" << j + 1 << "] : " ;
                    cin >> matrix [i][j] ;
                }
        }

    cout << "\n\t\t * Matrix elements : \n\t\t\t\t\t" ;
    for ( int i = 0 ; i < matrix_lines ; i ++ ) 
        {
            for ( int j = 0 ; j < matrix_columns ; ++ j )
                cout << matrix [i][j] << " " ;
            cout << "\n\t\t\t\t\t" ;       
        }

    cout << endl ;

    return 0 ;
}
