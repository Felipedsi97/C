#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class PhoneNumber
{
    public:
   friend ostream &operator<<( ostream &, const PhoneNumber & );
   friend istream &operator>>( istream &, PhoneNumber & );
   void setnome(string);
private:
   string areaCode; // 3-digit area code
   string exchange; // 3-digit exchange
   string line;
   string nome; // 4-digit line
}; // end class PhoneNumber


void PhoneNumber::setnome(string a)
{
    nome = a;
}

// overloaded stream insertion operator; cannot be
// a member function if we would like to invoke it with
// cout << somePhoneNumber;
ostream &operator<<( ostream &output, const PhoneNumber &number)
{
   if (number.nome == "sim")
   {
       output << "(" << number.areaCode << ") "
      << "9" << number.exchange << "-" << number.line;
   return output; // enables cout << a << b << c;
   }


else
    {
    output << "(" << number.areaCode << ") "
      << number.exchange << "-" << number.line;
   return output; // enables cout << a << b << c;
    }
}
    // end function operator<<

// overloaded stream extraction operator; cannot be
// a member function if we would like to invoke it with
// cin >> somePhoneNumber;
istream &operator>>( istream &input, PhoneNumber &number )
{
   input.ignore(); // skip (
   input >> setw( 2 ) >> number.areaCode; // input area code
   input.ignore(2); // skip ) and space
   input >> setw( 4 ) >> number.exchange; // input exchange
   input.ignore(); // skip dash (-)
   input >> setw( 4 ) >> number.line; // input line
   return input; // enables cin >> a >> b >> c;
} // end function operator>>



// Fig. 11.5: fig11_05.cpp
// Demonstrating class PhoneNumber's overloaded stream insertion
// and stream extraction operators.

int main()
{
   PhoneNumber phone; // create object phone
    cout << "Caso queira digitar o numero de um celular(o 9 sera inserido ao comeco), digite 'sim'. Caso contrario digite 'nao'. " << endl;
    string b;
    cin >> b;
    phone.setnome(b);
   cout << "Enter phone number in the form (12) 1456-7890:" << endl;

   // cin >> phone invokes operator>> by implicitly issuing
   // the global function call operator>>( cin, phone )
   cin >> phone;

   cout << "The phone number entered was: ";

   // cout << phone invokes operator<< by implicitly issuing
   // the global function call operator<<( cout, phone )
   cout << phone << endl;
} // end main


