#include <iostream>

using namespace std;


int main()
{

//

/*
  +-------------------+
  |code for encryption|
  +-------------------+
*/


/* encryption code starting point

  int num;

  // take input from user
  cout << "Enter a 4-digit number : ";
  cin >> num;


  int r = 1;    // r will be used as multiples of 10

  int temp_num = 0;
  int encrypted_num = 0;

  while (num > 0)
  {
      // rightmost digit
      int rm_digit = num % 10;

      // r is used to give weightage to each digit
      temp_num += ((rm_digit + 7) % 10) * r ;

      // increase r for next digit
      r = r * 10;

      // remove last digit
      num = num / 10;
  }


  // swap first digit with third
  // and second with last by changing weightage of each digit

  encrypted_num += (temp_num % 10) * 100;
  temp_num /= 10;

  encrypted_num += (temp_num % 10) * 1000;
  temp_num /= 10;

  encrypted_num += (temp_num % 10) * 1;
  temp_num /= 10;

  encrypted_num += (temp_num % 10) * 10;


  cout << "The encrypted number is : " << encrypted_num << endl;


*/  //



// --------------------------------------------------------------



  /* decryption code starting point

  +-------------------+
  |code for decryption|
  +-------------------+

  */

  /*
  int encrypted_num;
  int temp_num = 0, decrypted_num = 0;

  // take input from user
  cout << "Enter a encrypted 4-digit number : ";
  cin >> encrypted_num;

  // reverse the swapping
  temp_num += (encrypted_num % 10) * 100;
  encrypted_num /= 10;

  temp_num += (encrypted_num % 10) * 1000;
  encrypted_num /= 10;

  temp_num += (encrypted_num % 10) * 1;
  encrypted_num /= 10;

  temp_num += (encrypted_num % 10) * 10;

  int r = 1;

  while (temp_num > 0)
  {
      int rm_digit = temp_num % 10;

      // if the digits falls within [0,6]
      // since we added 7 to original digit and the original digit must
      // be between 0 and 9 so the digit + 7 must be between 7 and 16
      // which means modulus with 10 will give 7,8,9 when original digit was
      // 7,8,9 , on the other hand it will give 0,1,2,3,4,5,6 if original digit
      // was 10,11,12,13,14,15,16 hence the condition

      if (rm_digit >= 0 and rm_digit <= 6)
      {
           decrypted_num += ((rm_digit + 10) - 7) * r;
      }

      else
      {
          decrypted_num += (rm_digit - 7) * r;
      }


      // increase r
      r *= 10;
      temp_num /= 10;

  }

  cout << "The decrypted number is : " << decrypted_num << endl;

  return 0;



  decryption code ending point */


}


/*

 Question Statement :

 4.35 (Enforcing Privacy with Cryptography) The explosive growth of Internet communications
 and data storage on Internet-connected computers has greatly increased privacy concerns. The field
 of cryptography is concerned with coding data to make it difficult (and hopefully—with the most
 advanced schemes—impossible) for unauthorized users to read. In this exercise you’ll investigate a
 simple scheme for encrypting and decrypting data. A company that wants to send data over the Internet has asked you to write a program
 that will encrypt it so that it may be transmitted more securely. All the data is transmitted as four-digit integers. Your application should read a four-digit
 integer entered by the user and encrypt it as follows: Replace each digit with the result of adding 7
 to the digit and getting the remainder after dividing the new value by 10. Then swap the first digit
 with the third, and swap the second digit with the fourth. Then print the encrypted integer. Write
 a separate application that inputs an encrypted four-digit integer and decrypts it (by reversing the
 encryption scheme) to form the original number.

 */
