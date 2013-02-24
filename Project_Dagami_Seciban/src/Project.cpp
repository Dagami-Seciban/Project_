#include "../include/Project.h"
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <map>

using namespace std;

Project::Project()
{
    //ctor
}

Project::~Project()
{
    //dtor
}

void Project::multiples_3_and_5()
{
    int i, sum = 0;

    for ( i = 0; i < 1000; i++ )
    {
        if ( i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    cout << endl << "The sum of the multiples of 3 and 5 is " << sum << endl << endl;
}

void Project::even_fibonacce()
{
    int sum = 0, present = 1, previous = 1, temp;

    while ( present < 4000000 )
    {
        if ( present % 2 == 0 )
        {
            sum += present;
        }
        temp = present;
        present += previous;
        previous = temp;
    }

    cout << endl << "The sum of all even numbers is " << sum << endl << endl;
}

void Project::largest_prime_factor()
{
    long long largest_prime = 0;
    long long num = 600851475143LL;
    int i, j;

    for ( i = 2; i < num; i++ )
    {
        if ( num % i == 0)
        {
            for ( j = 2; j < i; j ++ )
            {
                if ( i % j == 0 )
                {
                    break;
                }

                else if ( j == i - 1 )
                {
                    largest_prime = i;
                }
            }
        }
    }

    cout << endl << "The largest prime of 600,851,475,143 is " << largest_prime << endl << endl;
}

void Project::largest_palindrome_product()
{
    int a, b, x, y, i, palindrome = 0;
    char d,digits[6] = {0};

    for ( a = 999; a >= 100; a-- )
    {
        for ( b = 999; b >= a; b-- )
        {
            x  = a * b;
            y = 0;

            do
            {
                d = x % 10;
                x /= 10;
                digits [ y ] = d;
                y++;
            }
            while ( x != 0 );
            x  = a * b;

            for ( i = 0; i < y / 2; i++ )
            {
                if ( digits [ i ] != digits [ y - 1 - i ] )
                {
                    break;
                }
            }

            if ( i == y / 2 )
            {
                if ( x > palindrome )
                {
                    palindrome = x;
                }
            }
        }
    }

    cout << endl << "The largest palindrome made from the product of two 3-digit numbers is " << palindrome << endl << endl;
}

void Project::smallest_multiple()
{
    int i = 1;
    bool k = false;

    while ( !k )
    {
        for ( int j = 1; j <= 20; j++)
        {
            if ( i % j == 0 )
            {
                if ( j == 20 )
                {
                    k = true;
                    break;
                }
            }

            else
            {
                break;
            }
        }
        i++;
    }
    i--;

    cout << endl << "The smallest positive number is " << i << endl << endl;
}

void Project::sum_square_diff()
{
    int sum = 0;

    for ( int i = 0; i < 100; ++i )
    {
        sum += ( i + 1 ) * ( i + 1 );
    }

    int square = ( 101 * 50 ) * ( 101 * 50 );

    cout << endl << "The difference is " << square - sum << endl << endl;
}

void Project::the_10001st_prime()
{
    int x = 2;

    for ( int i = 0; i < 10001; i++ )
    {
        bool y = 0;
        while ( !y )
        {
            for ( int j = 2; j <= x; j++)
            {
                if ( j == x )
                {
                    y = true;
                    break;
                }

                else if ( x % j == 0 )
                {
                    break;
                }

            }
            x++;
        }
    }
    x--;

    cout << endl << "The 10,001st prime number is " << x << endl << endl ;
}

void Project::largest_product_in_series()
{
    ifstream ReadFile;
    string line, str;
    string numbers = "";
    int index = 0;
    int temp = 0;
    int y = 0;
    int product = 1;
    int product2 = 1;
    int getnumber[5];
    int highestproduct[5];
    ReadFile.open("4digits.txt");

    while(ReadFile.good())
    {
        getline(ReadFile, line);
        str = line;
        numbers += str;
    }
        string a;
        for(int i = 0; i < 1000 - 4;i++)
        {
            product2 = 1;

            index = i;
            for(int k = 0; k < 5; k++)
            {
                a = numbers.at(index);
                stringstream(a) >> temp;
                y = temp;
                getnumber[k] = y;
                product2 *= getnumber[k];
                index++;
             }

            if(product < product2)
            {
                product = product2;
                for(int k = 0; k < 5; k++)
                {
                    highestproduct[k] = getnumber[k];
                }
            }

        }
      cout << endl << "The greatest product of 5 consecutive digits is " << product << endl << endl;
}

void Project::special_pytho_triplet()
{
    bool x = false;
    int a, b, c;

    for ( a = 1; a < 1000 / 3; a++ )
    {
        for ( b = 2; b < 1000 / 2; b++ )
        {
            c = 1000 - a - b;

            if ( a * a + b * b == c * c )
            {
                x = true;
                break;
            }
        }
        if ( x )
        {
            break;
        }
    }

    cout << endl << "The product of a, b, and c is " << a * b * c << endl << endl;
}

void Project::summation_of_primes()
{
    long long sum = 0LL;
    int num = 2000000;

    for ( int i = 2; i < num; i++ )
    {
        for ( int j = 2; j <= i; j++ )
        {
            if ( j == i )
            {
                sum += i;
            }

            else if ( i % j == 0 )
            {
                break;
            }
        }
    }

    cout << endl << "The sum of all the primes below 2,000,000 is " << sum << endl << endl;
}

void Project::largest_product_grid()
{
	int data [ 20 ] [ 20 ] = {
                            { 8,02,22,97,38,15,00,40,00,75,04,05,07,78,52,12,50,77,91, 8},
                            {49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,04,56,62,00},
                            {81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,03,49,13,36,65},
                            {52,70,95,23,04,60,11,42,69,24,68,56,01,32,56,71,37,02,36,91},
                            {22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80},
                            {24,47,32,60,99,03,45,02,44,75,33,53,78,36,84,20,35,17,12,50},
                            {32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70},
                            {67,26,20,68,02,62,12,20,95,63,94,39,63, 8,40,91,66,49,94,21},
                            {24,55,58,05,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72},
                            {21,36,23, 9,75,00,76,44,20,45,35,14,00,61,33,97,34,31,33,95},
                            {78,17,53,28,22,75,31,67,15,94,03,80,04,62,16,14, 9,53,56,92},
                            {16,39,05,42,96,35,31,47,55,58,88,24,00,17,54,24,36,29,85,57},
                            {86,56,00,48,35,71,89,07,05,44,44,37,44,60,21,58,51,54,17,58},
                            {19,80,81,68,05,94,47,69,28,73,92,13,86,52,17,77,04,89,55,40},
                            {04,52, 8,83,97,35,99,16,07,97,57,32,16,26,26,79,33,27,98,66},
                            {88,36,68,87,57,62,20,72,03,46,33,67,46,55,12,32,63,93,53,69},
                            {04,42,16,73,38,25,39,11,24,94,72,18, 8,46,29,32,40,62,76,36},
                            {20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,04,36,16},
                            {20,73,35,29,78,31,90,01,74,31,49,71,48,86,81,16,23,57,05,54},
                            {01,70,54,71,83,51,54,69,16,92,33,48,61,43,52,01,89,19,67,48},
                                                                                        };

    int start = 0;
    int end = 3;
    long long result = 1;

    vector < long long > final_results;

    for ( int k = 0; k < 20; k++ )
    {
        for ( int i = 0; i <= 16; i++ )
        {
            for ( int j = start; j <= end; j++ )
            {
                result = result * data [ k ] [ j ];
                if ( j == end )
                {
                    final_results.push_back ( result );
                }
            }
            result = 1;
            start++;
            end++;
        }
        start = 0;
        end = 3;

        for ( int i = 0; i <= 16; i++ )
        {
            for ( int j = start; j <= end; j++ )
            {
                result = result * data [ j ] [ k ];
                if ( j == end )
                {
                    final_results.push_back ( result );
                }
            }
            result = 1;
            start++;
            end++;
        }
        start = 0;
        end = 3;
    }

    int current_row = 0;

    for ( int i = 0 ; i <= 16; i++ )
    {
        for ( int j = 0; j <= 16; j++ )
        {
            current_row = i;
            for ( int k = start; k<=end; k++ )
            {
                result = result * data [ current_row ] [ k ];
                current_row++;
                if ( k == end )
                {
                    final_results.push_back ( result );
                }
            }
            result = 1;
            start++;
            end++;
        }
        start = 0;
        end = 3;

        for ( int j = 0; j <= 16; j++ )
        {
            current_row = i + 3;
            for ( int k = start; k <= end; k++ )
            {
                result = result * data [ current_row ] [ k ];
                current_row--;
                if ( k == end )
                {
                    final_results.push_back ( result );
                }
            }
            result = 1;
            start++;
            end++;
        }
        start = 0;
        end = 3;
    }

    long long largest_product = 0;

    for ( unsigned int i = 0; i < final_results.size (); i++)
    {
        if ( final_results [ i ] > largest_product )
        {
            largest_product = final_results [ i ];
        }
    }

    cout << endl << "The largest product is " << largest_product << endl << endl;
}

void Project::divisible_triangular_number()
{
    unsigned long long int i = 1;
	unsigned long long int sum = 0;

	while ( 1 )
	{
		sum += i;
		int numD = 2;

		for ( unsigned long long int n = 2; n < sqrt ( sum ); ++n )
		{
		    if ( sum % n == 0 )
		    {
		        numD += 2;
		    }
		}

		if ( numD > 500 )
		{
			cout << endl << "The value of the first triangle number is " << sum << endl << endl;
			break;
        }

        i++;
    }
}

void Project::largest_sum()
{
    long long temp = 0;
    long long carry [ 50 ] = {};
    int k = 49;
    int z = 49;
    int answer [ 50 ] = {};
    int data [ 100 ] [ 50 ] = {
    {3, 7, 1, 0, 7, 2, 8, 7, 5, 3, 3, 9, 0, 2, 1, 0, 2, 7, 9, 8, 7, 9, 7, 9, 9, 8, 2, 2, 0, 8, 3, 7, 5, 9, 0, 2, 4, 6, 5, 1, 0, 1, 3, 5, 7, 4, 0, 2, 5, 0}  ,
    {4, 6, 3, 7, 6, 9, 3, 7, 6, 7, 7, 4, 9, 0, 0, 0, 9, 7, 1, 2, 6, 4, 8, 1, 2, 4, 8, 9, 6, 9, 7, 0, 0, 7, 8, 0, 5, 0, 4, 1, 7, 0, 1, 8, 2, 6, 0, 5, 3, 8}  ,
    {7, 4, 3, 2, 4, 9, 8, 6, 1, 9, 9, 5, 2, 4, 7, 4, 1, 0, 5, 9, 4, 7, 4, 2, 3, 3, 3, 0, 9, 5, 1, 3, 0, 5, 8, 1, 2, 3, 7, 2, 6, 6, 1, 7, 3, 0, 9, 6, 2, 9}  ,
    {9, 1, 9, 4, 2, 2, 1, 3, 3, 6, 3, 5, 7, 4, 1, 6, 1, 5, 7, 2, 5, 2, 2, 4, 3, 0, 5, 6, 3, 3, 0, 1, 8, 1, 1, 0, 7, 2, 4, 0, 6, 1, 5, 4, 9, 0, 8, 2, 5, 0}  ,
    {2, 3, 0, 6, 7, 5, 8, 8, 2, 0, 7, 5, 3, 9, 3, 4, 6, 1, 7, 1, 1, 7, 1, 9, 8, 0, 3, 1, 0, 4, 2, 1, 0, 4, 7, 5, 1, 3, 7, 7, 8, 0, 6, 3, 2, 4, 6, 6, 7, 6}  ,
    {8, 9, 2, 6, 1, 6, 7, 0, 6, 9, 6, 6, 2, 3, 6, 3, 3, 8, 2, 0, 1, 3, 6, 3, 7, 8, 4, 1, 8, 3, 8, 3, 6, 8, 4, 1, 7, 8, 7, 3, 4, 3, 6, 1, 7, 2, 6, 7, 5, 7}  ,
    {2, 8, 1, 1, 2, 8, 7, 9, 8, 1, 2, 8, 4, 9, 9, 7, 9, 4, 0, 8, 0, 6, 5, 4, 8, 1, 9, 3, 1, 5, 9, 2, 6, 2, 1, 6, 9, 1, 2, 7, 5, 8, 8, 9, 8, 3, 2, 7, 3, 8}  ,
    {4, 4, 2, 7, 4, 2, 2, 8, 9, 1, 7, 4, 3, 2, 5, 2, 0, 3, 2, 1, 9, 2, 3, 5, 8, 9, 4, 2, 2, 8, 7, 6, 7, 9, 6, 4, 8, 7, 6, 7, 0, 2, 7, 2, 1, 8, 9, 3, 1, 8}  ,
    {4, 7, 4, 5, 1, 4, 4, 5, 7, 3, 6, 0, 0, 1, 3, 0, 6, 4, 3, 9, 0, 9, 1, 1, 6, 7, 2, 1, 6, 8, 5, 6, 8, 4, 4, 5, 8, 8, 7, 1, 1, 6, 0, 3, 1, 5, 3, 2, 7, 6}  ,
    {7, 0, 3, 8, 6, 4, 8, 6, 1, 0, 5, 8, 4, 3, 0, 2, 5, 4, 3, 9, 9, 3, 9, 6, 1, 9, 8, 2, 8, 9, 1, 7, 5, 9, 3, 6, 6, 5, 6, 8, 6, 7, 5, 7, 9, 3, 4, 9, 5, 1}  ,
    {6, 2, 1, 7, 6, 4, 5, 7, 1, 4, 1, 8, 5, 6, 5, 6, 0, 6, 2, 9, 5, 0, 2, 1, 5, 7, 2, 2, 3, 1, 9, 6, 5, 8, 6, 7, 5, 5, 0, 7, 9, 3, 2, 4, 1, 9, 3, 3, 3, 1}  ,
    {6, 4, 9, 0, 6, 3, 5, 2, 4, 6, 2, 7, 4, 1, 9, 0, 4, 9, 2, 9, 1, 0, 1, 4, 3, 2, 4, 4, 5, 8, 1, 3, 8, 2, 2, 6, 6, 3, 3, 4, 7, 9, 4, 4, 7, 5, 8, 1, 7, 8}  ,
    {9, 2, 5, 7, 5, 8, 6, 7, 7, 1, 8, 3, 3, 7, 2, 1, 7, 6, 6, 1, 9, 6, 3, 7, 5, 1, 5, 9, 0, 5, 7, 9, 2, 3, 9, 7, 2, 8, 2, 4, 5, 5, 9, 8, 8, 3, 8, 4, 0, 7}  ,
    {5, 8, 2, 0, 3, 5, 6, 5, 3, 2, 5, 3, 5, 9, 3, 9, 9, 0, 0, 8, 4, 0, 2, 6, 3, 3, 5, 6, 8, 9, 4, 8, 8, 3, 0, 1, 8, 9, 4, 5, 8, 6, 2, 8, 2, 2, 7, 8, 2, 8}  ,
    {8, 0, 1, 8, 1, 1, 9, 9, 3, 8, 4, 8, 2, 6, 2, 8, 2, 0, 1, 4, 2, 7, 8, 1, 9, 4, 1, 3, 9, 9, 4, 0, 5, 6, 7, 5, 8, 7, 1, 5, 1, 1, 7, 0, 0, 9, 4, 3, 9, 0}  ,
    {3, 5, 3, 9, 8, 6, 6, 4, 3, 7, 2, 8, 2, 7, 1, 1, 2, 6, 5, 3, 8, 2, 9, 9, 8, 7, 2, 4, 0, 7, 8, 4, 4, 7, 3, 0, 5, 3, 1, 9, 0, 1, 0, 4, 2, 9, 3, 5, 8, 6}  ,
    {8, 6, 5, 1, 5, 5, 0, 6, 0, 0, 6, 2, 9, 5, 8, 6, 4, 8, 6, 1, 5, 3, 2, 0, 7, 5, 2, 7, 3, 3, 7, 1, 9, 5, 9, 1, 9, 1, 4, 2, 0, 5, 1, 7, 2, 5, 5, 8, 2, 9}  ,
    {7, 1, 6, 9, 3, 8, 8, 8, 7, 0, 7, 7, 1, 5, 4, 6, 6, 4, 9, 9, 1, 1, 5, 5, 9, 3, 4, 8, 7, 6, 0, 3, 5, 3, 2, 9, 2, 1, 7, 1, 4, 9, 7, 0, 0, 5, 6, 9, 3, 8}  ,
    {5, 4, 3, 7, 0, 0, 7, 0, 5, 7, 6, 8, 2, 6, 6, 8, 4, 6, 2, 4, 6, 2, 1, 4, 9, 5, 6, 5, 0, 0, 7, 6, 4, 7, 1, 7, 8, 7, 2, 9, 4, 4, 3, 8, 3, 7, 7, 6, 0, 4}  ,
    {5, 3, 2, 8, 2, 6, 5, 4, 1, 0, 8, 7, 5, 6, 8, 2, 8, 4, 4, 3, 1, 9, 1, 1, 9, 0, 6, 3, 4, 6, 9, 4, 0, 3, 7, 8, 5, 5, 2, 1, 7, 7, 7, 9, 2, 9, 5, 1, 4, 5}  ,
    {3, 6, 1, 2, 3, 2, 7, 2, 5, 2, 5, 0, 0, 0, 2, 9, 6, 0, 7, 1, 0, 7, 5, 0, 8, 2, 5, 6, 3, 8, 1, 5, 6, 5, 6, 7, 1, 0, 8, 8, 5, 2, 5, 8, 3, 5, 0, 7, 2, 1}  ,
    {4, 5, 8, 7, 6, 5, 7, 6, 1, 7, 2, 4, 1, 0, 9, 7, 6, 4, 4, 7, 3, 3, 9, 1, 1, 0, 6, 0, 7, 2, 1, 8, 2, 6, 5, 2, 3, 6, 8, 7, 7, 2, 2, 3, 6, 3, 6, 0, 4, 5}  ,
    {1, 7, 4, 2, 3, 7, 0, 6, 9, 0, 5, 8, 5, 1, 8, 6, 0, 6, 6, 0, 4, 4, 8, 2, 0, 7, 6, 2, 1, 2, 0, 9, 8, 1, 3, 2, 8, 7, 8, 6, 0, 7, 3, 3, 9, 6, 9, 4, 1, 2}  ,
    {8, 1, 1, 4, 2, 6, 6, 0, 4, 1, 8, 0, 8, 6, 8, 3, 0, 6, 1, 9, 3, 2, 8, 4, 6, 0, 8, 1, 1, 1, 9, 1, 0, 6, 1, 5, 5, 6, 9, 4, 0, 5, 1, 2, 6, 8, 9, 6, 9, 2}  ,
    {5, 1, 9, 3, 4, 3, 2, 5, 4, 5, 1, 7, 2, 8, 3, 8, 8, 6, 4, 1, 9, 1, 8, 0, 4, 7, 0, 4, 9, 2, 9, 3, 2, 1, 5, 0, 5, 8, 6, 4, 2, 5, 6, 3, 0, 4, 9, 4, 8, 3}  ,
    {6, 2, 4, 6, 7, 2, 2, 1, 6, 4, 8, 4, 3, 5, 0, 7, 6, 2, 0, 1, 7, 2, 7, 9, 1, 8, 0, 3, 9, 9, 4, 4, 6, 9, 3, 0, 0, 4, 7, 3, 2, 9, 5, 6, 3, 4, 0, 6, 9, 1}  ,
    {1, 5, 7, 3, 2, 4, 4, 4, 3, 8, 6, 9, 0, 8, 1, 2, 5, 7, 9, 4, 5, 1, 4, 0, 8, 9, 0, 5, 7, 7, 0, 6, 2, 2, 9, 4, 2, 9, 1, 9, 7, 1, 0, 7, 9, 2, 8, 2, 0, 9}  ,
    {5, 5, 0, 3, 7, 6, 8, 7, 5, 2, 5, 6, 7, 8, 7, 7, 3, 0, 9, 1, 8, 6, 2, 5, 4, 0, 7, 4, 4, 9, 6, 9, 8, 4, 4, 5, 0, 8, 3, 3, 0, 3, 9, 3, 6, 8, 2, 1, 2, 6}  ,
    {1, 8, 3, 3, 6, 3, 8, 4, 8, 2, 5, 3, 3, 0, 1, 5, 4, 6, 8, 6, 1, 9, 6, 1, 2, 4, 3, 4, 8, 7, 6, 7, 6, 8, 1, 2, 9, 7, 5, 3, 4, 3, 7, 5, 9, 4, 6, 5, 1, 5}  ,
    {8, 0, 3, 8, 6, 2, 8, 7, 5, 9, 2, 8, 7, 8, 4, 9, 0, 2, 0, 1, 5, 2, 1, 6, 8, 5, 5, 5, 4, 8, 2, 8, 7, 1, 7, 2, 0, 1, 2, 1, 9, 2, 5, 7, 7, 6, 6, 9, 5, 4}  ,
    {7, 8, 1, 8, 2, 8, 3, 3, 7, 5, 7, 9, 9, 3, 1, 0, 3, 6, 1, 4, 7, 4, 0, 3, 5, 6, 8, 5, 6, 4, 4, 9, 0, 9, 5, 5, 2, 7, 0, 9, 7, 8, 6, 4, 7, 9, 7, 5, 8, 1}  ,
    {1, 6, 7, 2, 6, 3, 2, 0, 1, 0, 0, 4, 3, 6, 8, 9, 7, 8, 4, 2, 5, 5, 3, 5, 3, 9, 9, 2, 0, 9, 3, 1, 8, 3, 7, 4, 4, 1, 4, 9, 7, 8, 0, 6, 8, 6, 0, 9, 8, 4}  ,
    {4, 8, 4, 0, 3, 0, 9, 8, 1, 2, 9, 0, 7, 7, 7, 9, 1, 7, 9, 9, 0, 8, 8, 2, 1, 8, 7, 9, 5, 3, 2, 7, 3, 6, 4, 4, 7, 5, 6, 7, 5, 5, 9, 0, 8, 4, 8, 0, 3, 0}  ,
    {8, 7, 0, 8, 6, 9, 8, 7, 5, 5, 1, 3, 9, 2, 7, 1, 1, 8, 5, 4, 5, 1, 7, 0, 7, 8, 5, 4, 4, 1, 6, 1, 8, 5, 2, 4, 2, 4, 3, 2, 0, 6, 9, 3, 1, 5, 0, 3, 3, 2}  ,
    {5, 9, 9, 5, 9, 4, 0, 6, 8, 9, 5, 7, 5, 6, 5, 3, 6, 7, 8, 2, 1, 0, 7, 0, 7, 4, 9, 2, 6, 9, 6, 6, 5, 3, 7, 6, 7, 6, 3, 2, 6, 2, 3, 5, 4, 4, 7, 2, 1, 0}  ,
    {6, 9, 7, 9, 3, 9, 5, 0, 6, 7, 9, 6, 5, 2, 6, 9, 4, 7, 4, 2, 5, 9, 7, 7, 0, 9, 7, 3, 9, 1, 6, 6, 6, 9, 3, 7, 6, 3, 0, 4, 2, 6, 3, 3, 9, 8, 7, 0, 8, 5}  ,
    {4, 1, 0, 5, 2, 6, 8, 4, 7, 0, 8, 2, 9, 9, 0, 8, 5, 2, 1, 1, 3, 9, 9, 4, 2, 7, 3, 6, 5, 7, 3, 4, 1, 1, 6, 1, 8, 2, 7, 6, 0, 3, 1, 5, 0, 0, 1, 2, 7, 1}  ,
    {6, 5, 3, 7, 8, 6, 0, 7, 3, 6, 1, 5, 0, 1, 0, 8, 0, 8, 5, 7, 0, 0, 9, 1, 4, 9, 9, 3, 9, 5, 1, 2, 5, 5, 7, 0, 2, 8, 1, 9, 8, 7, 4, 6, 0, 0, 4, 3, 7, 5}  ,
    {3, 5, 8, 2, 9, 0, 3, 5, 3, 1, 7, 4, 3, 4, 7, 1, 7, 3, 2, 6, 9, 3, 2, 1, 2, 3, 5, 7, 8, 1, 5, 4, 9, 8, 2, 6, 2, 9, 7, 4, 2, 5, 5, 2, 7, 3, 7, 3, 0, 7}  ,
    {9, 4, 9, 5, 3, 7, 5, 9, 7, 6, 5, 1, 0, 5, 3, 0, 5, 9, 4, 6, 9, 6, 6, 0, 6, 7, 6, 8, 3, 1, 5, 6, 5, 7, 4, 3, 7, 7, 1, 6, 7, 4, 0, 1, 8, 7, 5, 2, 7, 5}  ,
    {8, 8, 9, 0, 2, 8, 0, 2, 5, 7, 1, 7, 3, 3, 2, 2, 9, 6, 1, 9, 1, 7, 6, 6, 6, 8, 7, 1, 3, 8, 1, 9, 9, 3, 1, 8, 1, 1, 0, 4, 8, 7, 7, 0, 1, 9, 0, 2, 7, 1}  ,
    {2, 5, 2, 6, 7, 6, 8, 0, 2, 7, 6, 0, 7, 8, 0, 0, 3, 0, 1, 3, 6, 7, 8, 6, 8, 0, 9, 9, 2, 5, 2, 5, 4, 6, 3, 4, 0, 1, 0, 6, 1, 6, 3, 2, 8, 6, 6, 5, 2, 6}  ,
    {3, 6, 2, 7, 0, 2, 1, 8, 5, 4, 0, 4, 9, 7, 7, 0, 5, 5, 8, 5, 6, 2, 9, 9, 4, 6, 5, 8, 0, 6, 3, 6, 2, 3, 7, 9, 9, 3, 1, 4, 0, 7, 4, 6, 2, 5, 5, 9, 6, 2}  ,
    {2, 4, 0, 7, 4, 4, 8, 6, 9, 0, 8, 2, 3, 1, 1, 7, 4, 9, 7, 7, 7, 9, 2, 3, 6, 5, 4, 6, 6, 2, 5, 7, 2, 4, 6, 9, 2, 3, 3, 2, 2, 8, 1, 0, 9, 1, 7, 1, 4, 1}  ,
    {9, 1, 4, 3, 0, 2, 8, 8, 1, 9, 7, 1, 0, 3, 2, 8, 8, 5, 9, 7, 8, 0, 6, 6, 6, 9, 7, 6, 0, 8, 9, 2, 9, 3, 8, 6, 3, 8, 2, 8, 5, 0, 2, 5, 3, 3, 3, 4, 0, 3}  ,
    {3, 4, 4, 1, 3, 0, 6, 5, 5, 7, 8, 0, 1, 6, 1, 2, 7, 8, 1, 5, 9, 2, 1, 8, 1, 5, 0, 0, 5, 5, 6, 1, 8, 6, 8, 8, 3, 6, 4, 6, 8, 4, 2, 0, 0, 9, 0, 4, 7, 0}  ,
    {2, 3, 0, 5, 3, 0, 8, 1, 1, 7, 2, 8, 1, 6, 4, 3, 0, 4, 8, 7, 6, 2, 3, 7, 9, 1, 9, 6, 9, 8, 4, 2, 4, 8, 7, 2, 5, 5, 0, 3, 6, 6, 3, 8, 7, 8, 4, 5, 8, 3}  ,
    {1, 1, 4, 8, 7, 6, 9, 6, 9, 3, 2, 1, 5, 4, 9, 0, 2, 8, 1, 0, 4, 2, 4, 0, 2, 0, 1, 3, 8, 3, 3, 5, 1, 2, 4, 4, 6, 2, 1, 8, 1, 4, 4, 1, 7, 7, 3, 4, 7, 0}  ,
    {6, 3, 7, 8, 3, 2, 9, 9, 4, 9, 0, 6, 3, 6, 2, 5, 9, 6, 6, 6, 4, 9, 8, 5, 8, 7, 6, 1, 8, 2, 2, 1, 2, 2, 5, 2, 2, 5, 5, 1, 2, 4, 8, 6, 7, 6, 4, 5, 3, 3}  ,
    {6, 7, 7, 2, 0, 1, 8, 6, 9, 7, 1, 6, 9, 8, 5, 4, 4, 3, 1, 2, 4, 1, 9, 5, 7, 2, 4, 0, 9, 9, 1, 3, 9, 5, 9, 0, 0, 8, 9, 5, 2, 3, 1, 0, 0, 5, 8, 8, 2, 2}  ,
    {9, 5, 5, 4, 8, 2, 5, 5, 3, 0, 0, 2, 6, 3, 5, 2, 0, 7, 8, 1, 5, 3, 2, 2, 9, 6, 7, 9, 6, 2, 4, 9, 4, 8, 1, 6, 4, 1, 9, 5, 3, 8, 6, 8, 2, 1, 8, 7, 7, 4}  ,
    {7, 6, 0, 8, 5, 3, 2, 7, 1, 3, 2, 2, 8, 5, 7, 2, 3, 1, 1, 0, 4, 2, 4, 8, 0, 3, 4, 5, 6, 1, 2, 4, 8, 6, 7, 6, 9, 7, 0, 6, 4, 5, 0, 7, 9, 9, 5, 2, 3, 6}  ,
    {3, 7, 7, 7, 4, 2, 4, 2, 5, 3, 5, 4, 1, 1, 2, 9, 1, 6, 8, 4, 2, 7, 6, 8, 6, 5, 5, 3, 8, 9, 2, 6, 2, 0, 5, 0, 2, 4, 9, 1, 0, 3, 2, 6, 5, 7, 2, 9, 6, 7}  ,
    {2, 3, 7, 0, 1, 9, 1, 3, 2, 7, 5, 7, 2, 5, 6, 7, 5, 2, 8, 5, 6, 5, 3, 2, 4, 8, 2, 5, 8, 2, 6, 5, 4, 6, 3, 0, 9, 2, 2, 0, 7, 0, 5, 8, 5, 9, 6, 5, 2, 2}  ,
    {2, 9, 7, 9, 8, 8, 6, 0, 2, 7, 2, 2, 5, 8, 3, 3, 1, 9, 1, 3, 1, 2, 6, 3, 7, 5, 1, 4, 7, 3, 4, 1, 9, 9, 4, 8, 8, 9, 5, 3, 4, 7, 6, 5, 7, 4, 5, 5, 0, 1}  ,
    {1, 8, 4, 9, 5, 7, 0, 1, 4, 5, 4, 8, 7, 9, 2, 8, 8, 9, 8, 4, 8, 5, 6, 8, 2, 7, 7, 2, 6, 0, 7, 7, 7, 1, 3, 7, 2, 1, 4, 0, 3, 7, 9, 8, 8, 7, 9, 7, 1, 5}  ,
    {3, 8, 2, 9, 8, 2, 0, 3, 7, 8, 3, 0, 3, 1, 4, 7, 3, 5, 2, 7, 7, 2, 1, 5, 8, 0, 3, 4, 8, 1, 4, 4, 5, 1, 3, 4, 9, 1, 3, 7, 3, 2, 2, 6, 6, 5, 1, 3, 8, 1}  ,
    {3, 4, 8, 2, 9, 5, 4, 3, 8, 2, 9, 1, 9, 9, 9, 1, 8, 1, 8, 0, 2, 7, 8, 9, 1, 6, 5, 2, 2, 4, 3, 1, 0, 2, 7, 3, 9, 2, 2, 5, 1, 1, 2, 2, 8, 6, 9, 5, 3, 9}  ,
    {4, 0, 9, 5, 7, 9, 5, 3, 0, 6, 6, 4, 0, 5, 2, 3, 2, 6, 3, 2, 5, 3, 8, 0, 4, 4, 1, 0, 0, 0, 5, 9, 6, 5, 4, 9, 3, 9, 1, 5, 9, 8, 7, 9, 5, 9, 3, 6, 3, 5}  ,
    {2, 9, 7, 4, 6, 1, 5, 2, 1, 8, 5, 5, 0, 2, 3, 7, 1, 3, 0, 7, 6, 4, 2, 2, 5, 5, 1, 2, 1, 1, 8, 3, 6, 9, 3, 8, 0, 3, 5, 8, 0, 3, 8, 8, 5, 8, 4, 9, 0, 3}  ,
    {4, 1, 6, 9, 8, 1, 1, 6, 2, 2, 2, 0, 7, 2, 9, 7, 7, 1, 8, 6, 1, 5, 8, 2, 3, 6, 6, 7, 8, 4, 2, 4, 6, 8, 9, 1, 5, 7, 9, 9, 3, 5, 3, 2, 9, 6, 1, 9, 2, 2}  ,
    {6, 2, 4, 6, 7, 9, 5, 7, 1, 9, 4, 4, 0, 1, 2, 6, 9, 0, 4, 3, 8, 7, 7, 1, 0, 7, 2, 7, 5, 0, 4, 8, 1, 0, 2, 3, 9, 0, 8, 9, 5, 5, 2, 3, 5, 9, 7, 4, 5, 7}  ,
    {2, 3, 1, 8, 9, 7, 0, 6, 7, 7, 2, 5, 4, 7, 9, 1, 5, 0, 6, 1, 5, 0, 5, 5, 0, 4, 9, 5, 3, 9, 2, 2, 9, 7, 9, 5, 3, 0, 9, 0, 1, 1, 2, 9, 9, 6, 7, 5, 1, 9}  ,
    {8, 6, 1, 8, 8, 0, 8, 8, 2, 2, 5, 8, 7, 5, 3, 1, 4, 5, 2, 9, 5, 8, 4, 0, 9, 9, 2, 5, 1, 2, 0, 3, 8, 2, 9, 0, 0, 9, 4, 0, 7, 7, 7, 0, 7, 7, 5, 6, 7, 2}  ,
    {1, 1, 3, 0, 6, 7, 3, 9, 7, 0, 8, 3, 0, 4, 7, 2, 4, 4, 8, 3, 8, 1, 6, 5, 3, 3, 8, 7, 3, 5, 0, 2, 3, 4, 0, 8, 4, 5, 6, 4, 7, 0, 5, 8, 0, 7, 7, 3, 0, 8}  ,
    {8, 2, 9, 5, 9, 1, 7, 4, 7, 6, 7, 1, 4, 0, 3, 6, 3, 1, 9, 8, 0, 0, 8, 1, 8, 7, 1, 2, 9, 0, 1, 1, 8, 7, 5, 4, 9, 1, 3, 1, 0, 5, 4, 7, 1, 2, 6, 5, 8, 1}  ,
    {9, 7, 6, 2, 3, 3, 3, 1, 0, 4, 4, 8, 1, 8, 3, 8, 6, 2, 6, 9, 5, 1, 5, 4, 5, 6, 3, 3, 4, 9, 2, 6, 3, 6, 6, 5, 7, 2, 8, 9, 7, 5, 6, 3, 4, 0, 0, 5, 0, 0}  ,
    {4, 2, 8, 4, 6, 2, 8, 0, 1, 8, 3, 5, 1, 7, 0, 7, 0, 5, 2, 7, 8, 3, 1, 8, 3, 9, 4, 2, 5, 8, 8, 2, 1, 4, 5, 5, 2, 1, 2, 2, 7, 2, 5, 1, 2, 5, 0, 3, 2, 7}  ,
    {5, 5, 1, 2, 1, 6, 0, 3, 5, 4, 6, 9, 8, 1, 2, 0, 0, 5, 8, 1, 7, 6, 2, 1, 6, 5, 2, 1, 2, 8, 2, 7, 6, 5, 2, 7, 5, 1, 6, 9, 1, 2, 9, 6, 8, 9, 7, 7, 8, 9}  ,
    {3, 2, 2, 3, 8, 1, 9, 5, 7, 3, 4, 3, 2, 9, 3, 3, 9, 9, 4, 6, 4, 3, 7, 5, 0, 1, 9, 0, 7, 8, 3, 6, 9, 4, 5, 7, 6, 5, 8, 8, 3, 3, 5, 2, 3, 9, 9, 8, 8, 6}  ,
    {7, 5, 5, 0, 6, 1, 6, 4, 9, 6, 5, 1, 8, 4, 7, 7, 5, 1, 8, 0, 7, 3, 8, 1, 6, 8, 8, 3, 7, 8, 6, 1, 0, 9, 1, 5, 2, 7, 3, 5, 7, 9, 2, 9, 7, 0, 1, 3, 3, 7}  ,
    {6, 2, 1, 7, 7, 8, 4, 2, 7, 5, 2, 1, 9, 2, 6, 2, 3, 4, 0, 1, 9, 4, 2, 3, 9, 9, 6, 3, 9, 1, 6, 8, 0, 4, 4, 9, 8, 3, 9, 9, 3, 1, 7, 3, 3, 1, 2, 7, 3, 1}  ,
    {3, 2, 9, 2, 4, 1, 8, 5, 7, 0, 7, 1, 4, 7, 3, 4, 9, 5, 6, 6, 9, 1, 6, 6, 7, 4, 6, 8, 7, 6, 3, 4, 6, 6, 0, 9, 1, 5, 0, 3, 5, 9, 1, 4, 6, 7, 7, 5, 0, 4}  ,
    {9, 9, 5, 1, 8, 6, 7, 1, 4, 3, 0, 2, 3, 5, 2, 1, 9, 6, 2, 8, 8, 9, 4, 8, 9, 0, 1, 0, 2, 4, 2, 3, 3, 2, 5, 1, 1, 6, 9, 1, 3, 6, 1, 9, 6, 2, 6, 6, 2, 2}  ,
    {7, 3, 2, 6, 7, 4, 6, 0, 8, 0, 0, 5, 9, 1, 5, 4, 7, 4, 7, 1, 8, 3, 0, 7, 9, 8, 3, 9, 2, 8, 6, 8, 5, 3, 5, 2, 0, 6, 9, 4, 6, 9, 4, 4, 5, 4, 0, 7, 2, 4}  ,
    {7, 6, 8, 4, 1, 8, 2, 2, 5, 2, 4, 6, 7, 4, 4, 1, 7, 1, 6, 1, 5, 1, 4, 0, 3, 6, 4, 2, 7, 9, 8, 2, 2, 7, 3, 3, 4, 8, 0, 5, 5, 5, 5, 6, 2, 1, 4, 8, 1, 8}  ,
    {9, 7, 1, 4, 2, 6, 1, 7, 9, 1, 0, 3, 4, 2, 5, 9, 8, 6, 4, 7, 2, 0, 4, 5, 1, 6, 8, 9, 3, 9, 8, 9, 4, 2, 2, 1, 7, 9, 8, 2, 6, 0, 8, 8, 0, 7, 6, 8, 5, 2}  ,
    {8, 7, 7, 8, 3, 6, 4, 6, 1, 8, 2, 7, 9, 9, 3, 4, 6, 3, 1, 3, 7, 6, 7, 7, 5, 4, 3, 0, 7, 8, 0, 9, 3, 6, 3, 3, 3, 3, 0, 1, 8, 9, 8, 2, 6, 4, 2, 0, 9, 0}  ,
    {1, 0, 8, 4, 8, 8, 0, 2, 5, 2, 1, 6, 7, 4, 6, 7, 0, 8, 8, 3, 2, 1, 5, 1, 2, 0, 1, 8, 5, 8, 8, 3, 5, 4, 3, 2, 2, 3, 8, 1, 2, 8, 7, 6, 9, 5, 2, 7, 8, 6}  ,
    {7, 1, 3, 2, 9, 6, 1, 2, 4, 7, 4, 7, 8, 2, 4, 6, 4, 5, 3, 8, 6, 3, 6, 9, 9, 3, 0, 0, 9, 0, 4, 9, 3, 1, 0, 3, 6, 3, 6, 1, 9, 7, 6, 3, 8, 7, 8, 0, 3, 9}  ,
    {6, 2, 1, 8, 4, 0, 7, 3, 5, 7, 2, 3, 9, 9, 7, 9, 4, 2, 2, 3, 4, 0, 6, 2, 3, 5, 3, 9, 3, 8, 0, 8, 3, 3, 9, 6, 5, 1, 3, 2, 7, 4, 0, 8, 0, 1, 1, 1, 1, 6}  ,
    {6, 6, 6, 2, 7, 8, 9, 1, 9, 8, 1, 4, 8, 8, 0, 8, 7, 7, 9, 7, 9, 4, 1, 8, 7, 6, 8, 7, 6, 1, 4, 4, 2, 3, 0, 0, 3, 0, 9, 8, 4, 4, 9, 0, 8, 5, 1, 4, 1, 1}  ,
    {6, 0, 6, 6, 1, 8, 2, 6, 2, 9, 3, 6, 8, 2, 8, 3, 6, 7, 6, 4, 7, 4, 4, 7, 7, 9, 2, 3, 9, 1, 8, 0, 3, 3, 5, 1, 1, 0, 9, 8, 9, 0, 6, 9, 7, 9, 0, 7, 1, 4}  ,
    {8, 5, 7, 8, 6, 9, 4, 4, 0, 8, 9, 5, 5, 2, 9, 9, 0, 6, 5, 3, 6, 4, 0, 4, 4, 7, 4, 2, 5, 5, 7, 6, 0, 8, 3, 6, 5, 9, 9, 7, 6, 6, 4, 5, 7, 9, 5, 0, 9, 6}  ,
    {6, 6, 0, 2, 4, 3, 9, 6, 4, 0, 9, 9, 0, 5, 3, 8, 9, 6, 0, 7, 1, 2, 0, 1, 9, 8, 2, 1, 9, 9, 7, 6, 0, 4, 7, 5, 9, 9, 4, 9, 0, 1, 9, 7, 2, 3, 0, 2, 9, 7}  ,
    {6, 4, 9, 1, 3, 9, 8, 2, 6, 8, 0, 0, 3, 2, 9, 7, 3, 1, 5, 6, 0, 3, 7, 1, 2, 0, 0, 4, 1, 3, 7, 7, 9, 0, 3, 7, 8, 5, 5, 6, 6, 0, 8, 5, 0, 8, 9, 2, 5, 2}  ,
    {1, 6, 7, 3, 0, 9, 3, 9, 3, 1, 9, 8, 7, 2, 7, 5, 0, 2, 7, 5, 4, 6, 8, 9, 0, 6, 9, 0, 3, 7, 0, 7, 5, 3, 9, 4, 1, 3, 0, 4, 2, 6, 5, 2, 3, 1, 5, 0, 1, 1}  ,
    {9, 4, 8, 0, 9, 3, 7, 7, 2, 4, 5, 0, 4, 8, 7, 9, 5, 1, 5, 0, 9, 5, 4, 1, 0, 0, 9, 2, 1, 6, 4, 5, 8, 6, 3, 7, 5, 4, 7, 1, 0, 5, 9, 8, 4, 3, 6, 7, 9, 1}  ,
    {7, 8, 6, 3, 9, 1, 6, 7, 0, 2, 1, 1, 8, 7, 4, 9, 2, 4, 3, 1, 9, 9, 5, 7, 0, 0, 6, 4, 1, 9, 1, 7, 9, 6, 9, 7, 7, 7, 5, 9, 9, 0, 2, 8, 3, 0, 0, 6, 9, 9}  ,
    {1, 5, 3, 6, 8, 7, 1, 3, 7, 1, 1, 9, 3, 6, 6, 1, 4, 9, 5, 2, 8, 1, 1, 3, 0, 5, 8, 7, 6, 3, 8, 0, 2, 7, 8, 4, 1, 0, 7, 5, 4, 4, 4, 9, 7, 3, 3, 0, 7, 8}  ,
    {4, 0, 7, 8, 9, 9, 2, 3, 1, 1, 5, 5, 3, 5, 5, 6, 2, 5, 6, 1, 1, 4, 2, 3, 2, 2, 4, 2, 3, 2, 5, 5, 0, 3, 3, 6, 8, 5, 4, 4, 2, 4, 8, 8, 9, 1, 7, 3, 5, 3}  ,
    {4, 4, 8, 8, 9, 9, 1, 1, 5, 0, 1, 4, 4, 0, 6, 4, 8, 0, 2, 0, 3, 6, 9, 0, 6, 8, 0, 6, 3, 9, 6, 0, 6, 7, 2, 3, 2, 2, 1, 9, 3, 2, 0, 4, 1, 4, 9, 5, 3, 5}  ,
    {4, 1, 5, 0, 3, 1, 2, 8, 8, 8, 0, 3, 3, 9, 5, 3, 6, 0, 5, 3, 2, 9, 9, 3, 4, 0, 3, 6, 8, 0, 0, 6, 9, 7, 7, 7, 1, 0, 6, 5, 0, 5, 6, 6, 6, 3, 1, 9, 5, 4}  ,
    {8, 1, 2, 3, 4, 8, 8, 0, 6, 7, 3, 2, 1, 0, 1, 4, 6, 7, 3, 9, 0, 5, 8, 5, 6, 8, 5, 5, 7, 9, 3, 4, 5, 8, 1, 4, 0, 3, 6, 2, 7, 8, 2, 2, 7, 0, 3, 2, 8, 0}  ,
    {8, 2, 6, 1, 6, 5, 7, 0, 7, 7, 3, 9, 4, 8, 3, 2, 7, 5, 9, 2, 2, 3, 2, 8, 4, 5, 9, 4, 1, 7, 0, 6, 5, 2, 5, 0, 9, 4, 5, 1, 2, 3, 2, 5, 2, 3, 0, 6, 0, 8}  ,
    {2, 2, 9, 1, 8, 8, 0, 2, 0, 5, 8, 7, 7, 7, 3, 1, 9, 7, 1, 9, 8, 3, 9, 4, 5, 0, 1, 8, 0, 8, 8, 8, 0, 7, 2, 4, 2, 9, 6, 6, 1, 9, 8, 0, 8, 1, 1, 1, 9, 7}  ,
    {7, 7, 1, 5, 8, 5, 4, 2, 5, 0, 2, 0, 1, 6, 5, 4, 5, 0, 9, 0, 4, 1, 3, 2, 4, 5, 8, 0, 9, 7, 8, 6, 8, 8, 2, 7, 7, 8, 9, 4, 8, 7, 2, 1, 8, 5, 9, 6, 1, 7}  ,
    {7, 2, 1, 0, 7, 8, 3, 8, 4, 3, 5, 0, 6, 9, 1, 8, 6, 1, 5, 5, 4, 3, 5, 6, 6, 2, 8, 8, 4, 0, 6, 2, 2, 5, 7, 4, 7, 3, 6, 9, 2, 2, 8, 4, 5, 0, 9, 5, 1, 6}  ,
    {2, 0, 8, 4, 9, 6, 0, 3, 9, 8, 0, 1, 3, 4, 0, 0, 1, 7, 2, 3, 9, 3, 0, 6, 7, 1, 6, 6, 6, 8, 2, 3, 5, 5, 5, 2, 4, 5, 2, 5, 2, 8, 0, 4, 6, 0, 9, 7, 2, 2} ,
    {5, 3, 5, 0, 3, 5, 3, 4, 2, 2, 6, 4, 7, 2, 5, 2, 4, 2, 5, 0, 8, 7, 4, 0, 5, 4, 0, 7, 5, 5, 9, 1, 7, 8, 9, 7, 8, 1, 2, 6, 4, 3, 3, 0, 3, 3, 1, 6, 9, 0}
    };

    for ( int y = 49; y >= 0; y -- )
    {
        temp = 0;

        for ( int x = 0; x < 100; x ++ )
        {
            temp += data[ x ][ y ];
        }

        carry [ z ] = temp;
        z --;
    }

    for ( z = 49; z >= 1; z -- )
    {
        answer [ k ] = carry [ z ] % 10;
        carry [ z ] /= 10;
        carry [ z - 1 ] += carry [ z ];
        k--;
    }

    answer [ k ] = carry [ 0 ];

    for ( k = 0; k <= 7; k++ )
    {
        cout << answer [ k ];
    }
}

void Project::longest_collatz_sequence()
{
    int top = 0;
    int counter = 0;
    int currentCounter = 0;

    for (int i = 2; i < 1000000; i++)
    {
        unsigned long temp = i;

        while (temp != 1)
        {
            if (temp%2 == 0)
            {
                currentCounter++;
                temp = temp / 2;
            }

            else
            {
                currentCounter++;
                temp = (3*temp) + 1;
            }
        }

        if (currentCounter > counter)
        {
            counter = currentCounter;
            top = i;
        }

        currentCounter = 0;
    }

	cout << endl << "The starting number is " << top << endl << endl;
}

void Project::diophantine_reciprocals_a()
{
    cout << endl << "                                      " << endl << endl;
}

void Project::power_digit_sum()
{
    int product = 0, sum = 0, j;
    string total = "1";

    for ( int i = 1; i <= 1000; i++ )
    {
        int hold = 0;
        for ( j = total.length () - 1; j >= 0; j-- )
        {
            product = ( total [ j ] - '0' ) * 2 + hold;
            if ( product > 9 )
            {
                hold = 1;
                product %= 10;
            }

            else
            {
                hold = 0;
            }
            total [ j ] = '0' + product;
            if ( j == 0 && hold == 1 )
            {
                total.insert ( 0, "1" );
            }
        }
    }

    for ( unsigned int j = 0; j < total.length(); j++ )
    {
        sum += total [ j ] - '0';
    }

    cout << endl << "The sum of the digits is " << sum << endl << endl;
}

void Project::number_letter_counts()
{
    map < int, string > num_to_string;
    string result;

    num_to_string [ 1 ] = "one";
    num_to_string [ 2 ] = "two";
    num_to_string [ 3 ] = "three";
    num_to_string [ 4 ] = "four";
    num_to_string [ 5 ] = "five";
    num_to_string [ 6 ] = "six";
    num_to_string [ 7 ] = "seven";
    num_to_string [ 8 ] = "eight";
    num_to_string [ 9 ] = "nine";
    num_to_string [ 11 ] = "eleven";
    num_to_string [ 12 ] = "twelve";
    num_to_string [ 13 ] = "thirteen";
    num_to_string [ 14 ] = "fourteen";
    num_to_string [ 15 ] = "fifteen";
    num_to_string [ 16 ] = "sixteen";
    num_to_string [ 17 ] = "seventeen";
    num_to_string [ 18 ] = "eighteen";
    num_to_string [ 19 ] = "nineteen";
    num_to_string [ 10 ] = "ten";
    num_to_string [ 20 ] = "twenty";
    num_to_string [ 30 ] = "thirty";
    num_to_string [ 40 ] = "forty";
    num_to_string [ 50 ] = "fifty";
    num_to_string [ 60 ] = "sixty";
    num_to_string [ 70 ] = "seventy";
    num_to_string [ 80 ] = "eighty";
    num_to_string [ 90 ] = "ninety";
    num_to_string [ 100 ] = "hundred";

    for ( int i = 1; i < 1001; i++ )
    {
        if ( i < 20 )
        {
            result += num_to_string [ i ];
        }

        else if ( i == 1000 )
        {
            result += "onethousand";
        }

        else
        {
            string temp;
                if ( i % 100 == 0 )
                {
                    temp = num_to_string [ i / 100 ] + "hundred";
                }

                else
                {
                    int hundreds = i / 100;
                    int ones = i % 10;
                    int tens, teens_check;
                    if ( hundreds != 0 )
                    {
                        temp = num_to_string[ hundreds ] + "hundredand";
                        tens = ( ( i - ( hundreds * 100 ) ) / 10 );
                    }

                    else
                    {
                        tens = i / 10;
                    }

                    teens_check = ( tens * 10 ) + ones;

                    if ( tens % 10  == 0 )
                    {
                        temp += num_to_string [ ones ];
                    }

                    else if ( ( teens_check >= 10 ) && ( teens_check < 20 ) )
                    {
                        temp += num_to_string [ teens_check ];
                    }

                    else
                    {
                        temp += num_to_string [ tens * 10 ] + num_to_string [ ones ];
                    }
                }
            result += temp;
        }
    }

    cout << endl << "The number of letters to be used is " << result.length () << endl << endl;
}

void Project::max_path_sum_one()
{
    std::vector< std::vector<int> > data;

    int arow1[1] = {75};
    std::vector<int> row1(arow1, arow1 + sizeof(arow1) / sizeof(arow1[0]));
    data.push_back(row1);

    int arow2[2] = {95, 64};
    std::vector<int> row2(arow2, arow2 + sizeof(arow2) / sizeof(arow2[0]));
    data.push_back(row2);

    int arow3[3] = {17, 47, 82};
    std::vector<int> row3(arow3, arow3 + sizeof(arow3) / sizeof(arow3[0]));
    data.push_back(row3);

    int arow4[4] = {18, 35, 87, 10};
    std::vector<int> row4(arow4, arow4 + sizeof(arow4) / sizeof(arow4[0]));
    data.push_back(row4);

    int arow5[5] = {20,  4, 82, 47, 65};
    std::vector<int> row5(arow5, arow5 + sizeof(arow5) / sizeof(arow5[0]));
    data.push_back(row5);

    int arow6[6] = {19,  1, 23, 75,  3, 34};
    std::vector<int> row6(arow6, arow6 + sizeof(arow6) / sizeof(arow6[0]));
    data.push_back(row6);

    int arow7[7] = {88,  2, 77, 73,  7, 63, 67};
    std::vector<int> row7(arow7, arow7 + sizeof(arow7) / sizeof(arow7[0]));
    data.push_back(row7);

    int arow8[8] = {99, 65,  4, 28,  6, 16, 70, 92};
    std::vector<int> row8(arow8, arow8 + sizeof(arow8) / sizeof(arow8[0]));
    data.push_back(row8);

    int arow9[9] = {41, 41, 26, 56, 83, 40, 80, 70, 33};
    std::vector<int> row9(arow9, arow9 + sizeof(arow9) / sizeof(arow9[0]));
    data.push_back(row9);

    int arow10[10] = {41, 48, 72, 33, 47, 32, 37, 16, 94, 29};
    std::vector<int> row10(arow10, arow10 + sizeof(arow10) / sizeof(arow10[0]));
    data.push_back(row10);

    int arow11[11] = {53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14};
    std::vector<int> row11(arow11, arow11 + sizeof(arow11) / sizeof(arow11[0]));
    data.push_back(row11);

    int arow12[12] = {70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57};
    std::vector<int> row12(arow12, arow12 + sizeof(arow12) / sizeof(arow12[0]));
    data.push_back(row12);

    int arow13[13] = {91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48};
    std::vector<int> row13(arow13, arow13 + sizeof(arow13) / sizeof(arow13[0]));
    data.push_back(row13);

    int arow14[14] = {63, 66,  4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31};
    std::vector<int> row14(arow14, arow14 + sizeof(arow14) / sizeof(arow14[0]));
    data.push_back(row14);

    int arow15[15] = { 4, 62, 98, 27, 23,  9, 70, 98, 73, 93, 38, 53, 60, 4, 23};
    std::vector<int> row15(arow15, arow15 + sizeof(arow15) / sizeof(arow15[0]));
    data.push_back(row15);

    for (int i = data.size(); i > 0; --i)
    {
        for (int j = 0; j < (i - 1); ++j)
        {
            data[i-2][j] += std::max(data[i-1][j], data[i-1][j+1]);
        }
    }

    cout << endl << "The maximum sum from top to bottom is " << data[0][0] << endl << endl;
}

void Project::counting_sundays()
{
    int sundays = 0, month, days = 1;

    for ( int i = 1901; i < 2000; i++ )
    {
        for ( int j = 1; j <= 12; j++ )
        {
            if ( j == 4 || j == 6 || j == 9 || j == 11 )
            {
                month = 30;
            }

            else if ( j == 2 )
            {
                if ( i % 400 == 0 || ( i % 4 == 0 && i % 100 != 0 ) )
                {
                    month = 29;
                }

                else
                {
                    month = 28;
                }
            }

            else
            {
                month = 31;
            }

            if ( days % 7 == 0 )
            {
                sundays++;
            }

            days += month;
        }
    }

    cout << endl << "The number of sundays is " << sundays << endl << endl;

    cin.ignore();
}

void Project::factorial_digit_sum()
{
    int i, j, sum = 0;
    int gm [ 1000 ] = {};

    gm [ 0 ] = 1;

    for ( i = 1; i <= 100; i++ )
    {
        for ( j = 0; j < 1000; j++ )
        {
            gm [ j ] = gm [ j ] * i;
        }

        for ( j = 0; j < 1000; j++ )
        {
            gm [ j + 1 ] += ( gm [ j ] ) / 10;
            gm [ j ] = ( gm [ j ] ) % 10;
        }
    }

    for ( j = 0; j < 1000; j++ )
    {
        sum += gm [ j ];
    }

    cout << endl << "The sum of the digits is " << sum << endl << endl;
}
