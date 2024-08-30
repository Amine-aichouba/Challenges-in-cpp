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

void input_array ( string methods [] , double notes [] ) 
{
start :

    clear_screen () ;
    cout << "\n\t\t * Give me one point for each subject out of twenty : " << endl ;
    for ( int i = 0 ; i < 5 ; ++ i ) 
        {
            cout << "\n\t\t * " << methods [i] << " : " ;
            cin >> notes [i] ;
            if ( notes [i] < 0 || notes [i] > 20 )
                goto start ;
        } 
}
      
int main() 
{
    string methods [] = { "Alogrithms" , "Math" , "networks" , "Arabic" , "English" } ;
    double notes [5] , average = 0 ;

    input_array( methods , notes ) ;

    for ( int i = 0 ; i < 5 ; i ++ ) 
        average += notes [i] / 5 ;
    
    cout << "\n\t\t * Average value : " << average << ( ( average < 10 ) ? " Failed !" : " successful !"   ) ;
    cout << endl ;

    return 0 ;
}
