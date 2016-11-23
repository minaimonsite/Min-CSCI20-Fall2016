#include <iostream>

#include <cstring>

using namespace std;

 

int main()

{
                // Variables and arrays
                char firststr[10]; 

                int firstname = 0;

                char *head = firststr; //Pionter to the array

                char *tail = firststr;
                
                //Prompt the user for input
                cout << "Please enter a 10 letter word or less" << endl;

                cin >> firststr;

                strlen(firststr);  // Checks the length of the input

                firstname = strlen(firststr); // Assigns the number of letters from the input to the variable "firstname"

                cout << "Your word is " << firststr << endl;

                if (firstname<10) //Sets up the condition of the input to less than 10 letters for the loop to operate

                {

                                while (*head != '\0') // prints out the original user input if it is less than 10 letters

                                {

                                                cout << *head;

                                                head++;

                                }

                }

                else

                {

                                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;

                }

                cout << endl;

                tail = &firststr[strlen(firststr) - 1]; //start index from the right

                if (firstname < 10)

                {

                                while (*tail>0) 

                                {

                                                cout << *tail;

                                                tail--;

                                }

                }

                cout << endl;

                head = firststr;

                tail = &firststr[strlen(firststr) - 1];

                head++;

                tail--;

                if (*head == *tail) // Checks if the characters match

                {

                                cout << "It is an palindrome!" << endl;

                }

                else

                {

                                cout << "It is not an palindrome" << endl;

                }

 

                return 0;

}