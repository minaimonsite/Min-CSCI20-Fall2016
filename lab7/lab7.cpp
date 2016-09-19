#include <iostream>
#include <string>
using namespace std;
void verse1 (string preChrous1) 
{
    cout << "  You say you wander your own land" << endl;
    cout << "    But when I think about it" << endl;
    cout << "    I don't see how you can" << endl;
    cout << "  You're aching, you're breaking" << endl;
    cout << " And I can see the pain in your eyes" << endl;
    cout << "     Says everybody's changing" << endl;
    cout << "   And I don't " << preChrous1 << endl;
    
}
void chrous () 
{
    cout << "         So little time" << endl;
    cout << "     Try to understand that I'm " << endl;
    cout << "Trying to make a move just to stay in the game" << endl;
    cout << "  I try to stay awake and remember my name" << endl;
    cout << "       But everybody's changing" << endl;
    cout << "      And I don't feel the same" << endl;
    
}
void verse2 (string preChrous2)
{
    cout << "       You're gone from here" << endl;
    cout << "     And soon you will disappear" << endl;
    cout << "     Fading into beautiful light" << endl;
    cout << "     Cause everybody's changing" << endl;
    cout << "   And I don't " << preChrous2 << endl;
}
int main () {
   string preChrous1 = "know why";
   string preChrous2 = "feel right";
    
    verse1(preChrous1);
    
    chrous();
    
    verse2(preChrous2);
    
    chrous();
    
    chrous();
    return 0;
}