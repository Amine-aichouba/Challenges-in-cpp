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
    string S1 , S2 , S3 , S4 ;
        
    clear_screen () ;
    cout << "\n\n\n\t\t * " << " Give me the first text : " ;
    cin >> S1 ;
    cout << "\n\n\t\t * " << " Give me the second text : " ;
    cin >> S2 ;
    cout << "\n\n\t\t * " << " Give me the third text : " ;
    cin >> S3 ;

    
    if ( S1 + S2 == S3 || S2 + S1 == S3 )
        cout << "\n\n\t\t • " << " first text + second text = third text " ;
    else 
        cout << "\n\n\t\t • " << " first text + second text =/= third text " ;

    if ( S1 == S2 ) 
        cout << "\n\n\t\t • " << " The first text equal the second text " ; 
    else 
        {
            if ( S2.find ( S1 , 0 ) != string::npos )
                cout << "\n\n\t\t • " << " The first text is part of the second text " ;
            else
                cout << "\n\n\t\t • " << " The first text is not equal to the second text . And the first text is not part of the second text " ;
        }

    if ( S1.length() > S2.length() )
        S4 = S1 + S2 ;

    if ( S1.length() < S2.length() )
        S4 = S1 + S2 ;

    if ( S1.find ( S2 , ( S1.length() / 2) ) != string::npos )
        cout << "\n\n\t\t • " << " The second text is part of the second half of the first text " ; 
    else 
        cout << "\n\n\t\t • " << " The second text is not part of the second half of the first text " ;
    
    cout << "\n\n\t\t • " << " The characters in the first half of the first text : " ;
    for ( size_t i = 0 ; i < ( S1.size() / 2 ) ; i ++ )
        cout << S1 [i] ;
    cout << endl ;
    
    return 0 ;
}
