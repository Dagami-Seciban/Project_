#include <iostream>
#include <cstdlib>
#include <string>
#include "include/Project.h"

using namespace std;

const string PROBLEMS [] = {
    "  Multiples of 3 and 5",
    "  Even Fibonacci Numbers",
    "  Largest Prime Factor",
    "  Largest Palindrome Product",
    "  Smallest Multiple",
    "  Sum and Square Difference",
    "  10001st Prime",
    "  Largest Product in a Series",
    "  Special Pythagorean Triplet",
    " Summation of Primes",
    " Largest Product in a Grid",
    " Highly Divisible Triangular Number",
    " Largest Sum",
    " Longest Collatz Sequence",
    " Diophantine Reciprocals A",
    " Power Digit Sum",
    " Number Letter Counts",
    " Maximum Path Sum I",
    " Counting Sundays",
    " Factorial Digit Sum",
    " Name Scores",
    " Exit"
};

const int NUM_PROBLEMS = 1;
const int EXIT = NUM_PROBLEMS + 21;

int main ()
{
    int i = 0, ch = 0;
    bool done = false;

    Project project;

    while ( done == false )
    {
        system ( "cls" );
        for ( i = 0; i < ( NUM_PROBLEMS + 21 ); i++ )
        {
            cout << ( i + 1 ) << ". " << PROBLEMS [i] << endl;
        }
        cout << endl << "Choose a problem: ";
        cin >> ch;

        switch ( ch )
        {
            case 1:
                project.multiples_3_and_5();
                break;

            case 2:
                project.even_fibonacce();
                break;

            case 3:
                project.largest_prime_factor();
                break;

            case 4:
                project.largest_palindrome_product();
                break;

            case 5:
                project.smallest_multiple();
                break;

            case 6:
                project.sum_square_diff();
                break;

            case 7:
                project.the_10001st_prime();
                break;

            case 8:
                project.largest_product_in_series();
                break;

            case 9:
                project.special_pytho_triplet();
                break;

            case 10:
                project.summation_of_primes();
                break;

            case 11:
                project.largest_product_grid();
                break;

            case 12:
                project.divisible_triangular_number();
                break;

            case 13:
                project.largest_sum();
                break;

            case 14:
                project.longest_collatz_sequence();
                break;

            case 15:
                project.diophantine_reciprocals_a();
                break;

            case 16:
                project.power_digit_sum();
                break;

            case 17:
                project.number_letter_counts();
                break;

            case 18:
                project.max_path_sum_one();
                break;

            case 19:
                project.counting_sundays();
                break;

            case 20:
                project.factorial_digit_sum();
                break;

            case 21:
                project.name_scores();
                break;

            case EXIT:
                done = true;
                break;
        }
        system ( "pause" );
    }
    return 0;
}
