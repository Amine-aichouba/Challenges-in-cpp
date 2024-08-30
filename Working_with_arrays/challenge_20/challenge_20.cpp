#include <iostream>

using namespace std;

int main () 
{

    int p_counter = 0 , n_counter = 0 , z_counter = 0 ;
    int** matrix , matrix_lines , matrix_columns ;

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


    for ( int i = 0 ; i < matrix_lines ; i ++ )
        {
            for ( int j = 0 ; j < matrix_columns ; j ++ )
                {
                    if ( matrix [i][j] > 0 )
                        p_counter ++ ;
                    
                    else 
                        if ( matrix [i][j] < 0 )
                            n_counter ++ ;
                        else  
                            z_counter ++ ;
                }
        }


    cout << "\n\n\t\t * Number of positive numbers : " << p_counter ;
    cout << "\n\n\t\t * Number of negative numbers : " << n_counter ;
    cout << "\n\n\t\t * Number of zeros : " << z_counter ;
    
    cout << endl ;

    return 0 ;
}
 