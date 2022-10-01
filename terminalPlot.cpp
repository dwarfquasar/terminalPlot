//Owen Danke
//A program that graphs up to cubic functions in the terminal

#include <iostream>
#include <iomanip>
using namespace std;

class Plot{
    
    //friend istream& operator >> (istream&);
    private:
     int m, b, a, c, d; //co-efficents for f(x)
     int f[10];
     char switchChoice;

    public:
    /*
    istream& operator>>(istream& in){
        cin >> switchChoice;
        switchChoice = toupper(switchChoice);
        return cin;
    }
*/
    void read(){
        
        cout << "(L)iner, (Q)uadratic, or (C)ubic?";

        cin >> switchChoice;
        switchChoice = toupper(switchChoice);

        switch (switchChoice) {
         case 'L':
            cout << "Linear eq is y=mx+b," << endl;
            cout << "m: ";
            cin >> m;
            cout << "b: ";
            cin >> b;
            cout << "y=" << m << "x+" <<b << endl;
               break;
           case 'Q':
            cout << "Quadratic is Ax^2 + Bx + C, " <<endl;
            cout << "A: ";
            cin >> a;
            cout << "B: ";
            cin >> b;
            cout >> "C: ";
            cin << c;
            break;
          case 'C':

          default:
            cout << endl;
         break;
        }
    }

    void calculate() {  //generate y values of f(x)

        switch (switchChoice) {
            case 'L':
                for(int x=0; x < 11; x++){
                    f[x] = (m * x) + b;//generate y values of f(x)
                }
                Plot.plotL();
                break;
            case 'Q':
                for(int=x; x < 11; x++){
                    f[x] = (x^2)*a + b*x + c
                }
                break;
            case 'C':

            default:
                cout << "nothing to graph";
         break;
        }
    }

    void plotL() const{
        for(int i=10; i > -1; i--){
            int tempMaxNum;
         //go through f[10] to f[0], taking x[0] and add spaces before x val
            //cout << f[i] << ' ' << setw(f[i]) << '*' << endl;
            cout << f[i];
            if(f[i] < 10){
                cout << ' ' << setw(f[i]) << '*' << endl;
            }
            else{
                cout << setw(f[i]) << '*' << endl;
            }
              }
         cout << setfill('-') << setw(3+f[10]) << endl; //<-- endl required, why?
         cout << ' ' << f[10] << endl;
    }
    void plotQ() const{
        for(int i=10; i > -1; i--){
            int tempMaxNum;
         //go through f[10] to f[0], taking x[0] and add spaces before x val
            //cout << f[i] << ' ' << setw(f[i]) << '*' << endl;
            cout << f[i];
            if(f[i] < 10){
                cout << ' ' << setw(f[i]) << '*' << endl;
            }
            else{
                cout << setw(f[i]) << '*' << endl;
            }
              }
         cout << setfill('-') << setw(3+f[10]) << endl; //<-- endl required, why?
         cout << ' ' << f[10] << endl;
    }

};

int main() {
    char b;

    Plot p;
    p.read();
    p.calculate();
    p.plot();

    cout << "Plot another function?";
    cin >> b;
    return 0;
}
