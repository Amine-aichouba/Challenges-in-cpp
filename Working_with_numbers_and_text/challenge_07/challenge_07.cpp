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

string replace_all ( string first_text , string second_text , string third_text )
{
    size_t pos = first_text.find ( second_text ) ;

    while ( pos != string::npos ) 
        {
            first_text.replace ( pos , second_text.length() , third_text ) ;
            pos = first_text.find ( second_text , pos + third_text.length() ) ;
        }

    return first_text ;
}

int main () 
{
    string first_text , second_text , third_text ;

    clear_screen () ;
    cout << "\n\n\n\t\t * " << " Give me the first text : " ;
    getline ( cin , first_text ) ;
    cout << "\n\n\t\t * " << " Give me the second text : " ;  
    getline ( cin , second_text ) ;
    cout << "\n\n\t\t * " << " Give me the third text : " ;  
    getline ( cin , third_text ) ;
    cout << "\n\n\t\t * " << " The text : " ;
    cout << replace_all ( first_text , second_text , third_text ) << endl ;

    return 0 ;
}

