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
    double first_number , second_number , third_number , fourth_number , fifth_number , average ;
    
    clear_screen () ; 

    cout << "\n\n\n\t\t * Give me the first number : " ; 
    cin >> first_number ;
    cout << "\n\t\t * Give me the second number : " ; 
    cin >> second_number ;
    cout << "\n\t\t * Give me the third number : " ; 
    cin >> third_number ;
    cout << "\n\t\t * Give me the fourth number : " ; 
    cin >> fourth_number ;
    cout << "\n\t\t * Give me the fifth number : " ; 
    cin >> fifth_number ;
    
    average = ( first_number + second_number + third_number + fourth_number + fifth_number ) / 5 ;
     
    cout << "\n\n\t\t * The average sum of the numbers is : " << average << endl ; 

    return 0 ;
}
