#include <iostream>
#include <string>

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
    string first_text , second_text ;

    clear_screen () ;
    cout << "\n\n\n\t\t * " << " Give me the first text : " ;
    getline ( cin , first_text ) ;
    cout << "\n\n\t\t * " << " Give me the second text : " ;  
    getline ( cin , second_text ) ;
    
    if ( first_text.substr ( ( first_text.length() - second_text.length() ) , second_text.length() ) == second_text )
        cout << "\n\n\n\t\t * The second text is the end of the first text " ;
    else 
        cout << "\n\n\n\t\t * The second text is not the end of the first text " ;
    
    cout << endl ;
    
    return 0 ;
}
