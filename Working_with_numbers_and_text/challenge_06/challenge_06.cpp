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

string remove_all ( string first_text , string second_text  ) 
{
    for ( size_t i = 0 ; i <= first_text.size () - second_text.size () ; i ++ )
        {
            if ( first_text.substr ( i , second_text.size () ) == second_text )
                first_text.erase ( i , second_text.size () ) ;
        }
    
    return first_text ;
}

int main ()
{
    string first_text , second_text ;
    
    clear_screen () ;
    cout << "\n\n\n\t\t * " << " Give me the first text : " ;
    getline ( cin , first_text ) ;
    cout << "\n\n\t\t * " << " Give me the second text : " ;  
    getline ( cin , second_text ) ;
    cout << "\n\n\t\t * " << " The text : " ;
    cout << remove_all ( first_text , second_text ) << endl ;

    return 0 ;
}
