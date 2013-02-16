#include "Project.h"
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <math.h>
using namespace std;

Project::Project()
{
    //ctor
}

Project::~Project()
{
    //dtor
}
// PROBLEM 1
void Project::multiples_of_3_and_5(){

    cout << "Kindly wait our system is still computing..." << endl << endl;

    int i;
    int sum=0;

    for(i=0; i<1000; i++)
    {
              if ((i%3)==0 || (i%5)==0){
              sum=sum+i;}
    }
    cout << "*The Sum of the Multiples of 3 and 5 is: " << sum << "*" << endl <<endl;
}

// PROBLEM 3
void Project::Largest_prime_factor_of_600851475143()
{
    cout << "Kindly wait our system is still computing..." << endl << endl;

    long long x=600851475143;

        for(int i=2;i<=sqrt(x);i++)
        {
            while(x%i==0 && x!= i)
            {
                x=x/i;
            }
        }
        cout << "The Largest Prime Factor is: " << x << endl << endl;
}


// PROBLEM 6
void Project::sum_squares_diff()
{
    cout << "Kindly wait our system is still computing..." << endl << endl;

    int sumofsquares;
    int squaredsum;
    int difference;

    sumofsquares = (100 * 101 * 201) / 6;
    squaredsum = (100 * 101 )/ 2;
    squaredsum = squaredsum * squaredsum;

        if (sumofsquares - squaredsum > 0) {
            difference = sumofsquares - squaredsum;
            //cout << "sumofsquares is larger. (" << sumofsquares << ")" << endl;
            }
        else {
            difference = squaredsum - sumofsquares;
            //cout << "squaredsum is larger. (" << squaredsum << ")" << endl;
            }

    cout << "*The Difference between the Sum of the Squares of the First One Hundred " << endl;
    cout << "Natural Numbers and the Square of their Sum is " << difference << "*" << endl << endl;
}

//PROBLEM 7

void Project::prime_10001st()
{
 cout << "Kindly wait our system is still computing..." << endl << endl;

 int ctr = 0;

    for (int i=2; ; i++)
        {
            bool prime=true;
            for (int j=2; j*j<=i; j++)
                { if (i % j == 0)
                    {
                        prime=false;
                        break;
                    }
                }
    if(prime)
        {
            ctr++;
        if (ctr==10001)
            {
            cout << "*The 10,001st Prime Number is: " << i << "*"<< endl << endl;
            break;
            }
        }
        }
}


// PROBLEM 2
void Project::Even_fibonacci()
{
    cout << "Kindly wait our system is still computing..." << endl << endl;

    int total = 0;
	int one = 1;
	int two = 2;
	int three = 0;
	while (two <= 4000000)
	{
		three = one + two;
		if (two % 2 == 0)
			total += two;
		one = two;
		two = three;
	}
	cout << "*The Sum of the Even-Valued Terms is: " << total << "*" << endl << endl;
}


// PROBLEM 4
void Project::Largest_Palindrome_Product()
{
    cout << "Kindly wait our system is still computing..." << endl << endl;

    long largestProduct = 0;
    string reverseproduct;

    for(long i=999; i>=100; --i)
    {
        for(long j=999; j>=100; --j)
        {
            long temp = i * j;
            if(temp > largestProduct)
            {
                stringstream strmProduct;
                strmProduct << i * j;
                reverseproduct = strmProduct.str();
                reverse(reverseproduct.begin(), reverseproduct.end());
                if(strmProduct.str() == reverseproduct)
                    largestProduct = temp;
            }
        }
    }
    cout << "*The Largest Palindrome from the product of two 3-digit numbers is: " << largestProduct << "*" << endl <<endl;
}


// PROBLEM 5
void Project::Smallest_multiple()
{
     cout << "Kindly wait our system is still computing..." << endl;
     cout << "Trying its very best.... :)" << endl << endl;

     int posnumber = 20;
     int flag = 0;

    while(flag == 0) {
        if ((posnumber%2) == 0 && (posnumber%3) == 0 && (posnumber%4) == 0    && (posnumber%5) == 0 && (posnumber%6) == 0
            && (posnumber%7) == 0 && (posnumber%8) == 0 && (posnumber%9) == 0 && (posnumber%10) == 0 && (posnumber%11) == 0 && (posnumber%12) ==0
            && (posnumber%13) == 0 && (posnumber%14) == 0 && (posnumber%15) == 0 && (posnumber%16) == 0 && (posnumber%17) == 0 && (posnumber%18)==0
            && (posnumber%19) == 0    && (posnumber%20) == 0)

        {
                flag =  1;
                cout << "*The Smallest Positive Number that is Evenly Divisible by All" << endl;
                cout << " of the Numbers from 1 to 20 is: " << posnumber << "*" << endl << endl;
        }
        posnumber++;
}
}


//PROBLEM 9
void Project::special_phyto_triplet()
{
    cout << "Kindly wait our system is still computing..." << endl << endl;

 int a = 0;
 int b = 0;
 int c = 0;
 int sumoftriples = 1000;
 int product;
 bool check = false;

	for (a = 1; a < sumoftriples / 3 && !check; a++)

        { for (b = a; b < sumoftriples / 2 && !check; b++)

            { c = sumoftriples - a - b;

        if ((a*a) + (b*b) == (c*c) )
            { check = true;
            product=a*b*c;
            cout << "A Pythagorean triplet is a set of three natural numbers, a  b  c " << endl;
            cout << "for which, " << endl;
            cout << "a2 + b2 = c2 " << endl << endl;
            cout << "There exists exactly one Pythagorean triplet for which a + b + c = 1000." <<endl;
            cout << "* That is: " << product << "*" << endl << endl;
            break;
            }
            }
        }
}


//PROBLEM 8
void Project::largest_product_in_series()

{
 cout << "Kindly wait our system is still computing..." << endl << endl;

string number= "73167176531330624919225119674426574742355349194934"
"96983520312774506326239578318016984801869478851843"
"85861560789112949495459501737958331952853208805511"
"12540698747158523863050715693290963295227443043557"
"66896648950445244523161731856403098711121722383113"
"62229893423380308135336276614282806444486645238749"
"30358907296290491560440772390713810515859307960866"
"70172427121883998797908792274921901699720888093776"
"65727333001053367881220235421809751254540594752243"
"52584907711670556013604839586446706324415722155397"
"53697817977846174064955149290862569321978468622482"
"83972241375657056057490261407972968652414535100474"
"82166370484403199890008895243450658541227588666881"
"16427171479924442928230863465674813919123162824586"
"17866458359124566529476545682848912883142607690042"
"24219022671055626321111109370544217506941658960408"
"07198403850962455444362981230987879927244284909188"
"84580156166097919133875499200524063689912560717606"
"05886116467109405077541002256983155200055935729725"
"71636269561882670428252483600823257530420752963450";
    long p=1;
    long five_d;
    long max=0;
    long i;
    const char* a=number.c_str();

    for (p=0; p<995; p++)
{
      five_d=1;
      for (i=p; i<p+5; i++)
      {
            five_d*=(int(a[i])-48);
            }
       if (five_d>max) max=five_d;
       }

  cout << "The Largest Product in Series is: " << max << endl;
}


//PROBLEM 10
void Project::Summation_of_primes()
{
    cout << "Kindly wait our system is still computing..." << endl;
    cout << "Trying its very best.... :)" << endl << endl;

    int num=1;
	unsigned long long int total=2;
	int divisor;
	bool prime = true ;

        while (num < 2000000)
            { prime=true;
            if (num<=1)
                prime=false;
            else if(num==2||num==3)
                prime=true;
            else if (num%2==0)
                prime = false ;
            else
            {

            for(divisor=3; divisor <1415;divisor=divisor+2)
            {
                if (num==divisor)
				prime=true;
                else if (num%divisor==0){
                prime=false;
                break;
                }
            }

            }
if (prime==true){
	total=total+num;
}
		num=num+2;
	}
	cout << "*The Sum of all the Primes Below Two Million[2M] is: " << total << "*" << endl << endl;
}

// YAAAAY //
