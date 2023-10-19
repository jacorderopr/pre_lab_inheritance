#include <iostream>
#include <vector>
using namespace std;



class Latino {

    protected:
        bool speaksSpanish;
        bool pronouncesRs;
        int age;
        string name;


    public:

        Latino(){

        }
        Latino(string paramName, int paramAge, bool paramSpeaksSpanish, bool paramPronouncesRs){
            
        this->name = paramName;
        this->age = paramAge;
        this->speaksSpanish = paramSpeaksSpanish;
        this->pronouncesRs = paramPronouncesRs;
        }
    
    string getName(){return name;}
    int getAge(){return age;}
    bool doesSpeakSpanish() {return speaksSpanish; }
    bool doesPronounceRs() {return pronouncesRs; }


    // setters
    void setName(string newName) {this->name = newName; }
    void setAge(int newAge){this->age = newAge;}
    void setSpeaksSpanish(bool newSpeakSpanish) { this->speaksSpanish = newSpeakSpanish;}
    void setPronouncesRs(bool newPronouncesRs) { this->pronouncesRs = newPronouncesRs;}

    virtual void singAnthem(){

    };
};

class Dominican : public Latino{
    private:
        

        vector<string> dominicanTowns;

        public:
    Dominican(string paramName, int paramAge, bool paramSpeaksSpanish, bool paramPronouncesRs, vector<string>paramDominicanTowns) :  Latino( paramName,  paramAge,  paramSpeaksSpanish,  paramPronouncesRs){

       
        this->dominicanTowns = paramDominicanTowns;
    }

    // getters
    

    vector<string> getDominicanTowns() {return dominicanTowns; }

    // setters
    
    // void singAnthem(){

    // }
    void setDominicanTowns(vector<string> newDominicanTowns) {this->dominicanTowns = newDominicanTowns; }
};


class PuertoRican : public Latino{
    private:
       

        vector<string> puertoRicanTowns;

    public:

         PuertoRican(string paramName, int paramAge, bool paramSpeaksSpanish, bool paramPronouncesRs, vector<string>paramPuertoRicanTowns): Latino(paramName, paramAge, paramSpeaksSpanish, paramPronouncesRs) { // 
            

            this->puertoRicanTowns = paramPuertoRicanTowns;

    }

    // getters
    

    vector<string> getPuertoRicanTowns() {return puertoRicanTowns; }

    // setters
   
    // void singAnthem(){

    // }
    void setPuertoRicanTowns(vector<string> newPuertoRicanTowns) {this->puertoRicanTowns = newPuertoRicanTowns;}
};

// vector<Latino*> keepOnlyDominicans(vector<Latino*> v){
    
//     }

// void showVector(vector<Latino*> v){
//     cout << "{";
//     for(Latino* currLatinoPtr : v){
        
//         Dominican* domPtr = dynamic_cast<Dominican*>(currLatinoPtr);
//         if(domPtr != nullptr){
//             // must be dominican
//             cout << "DOMINCAN - " << currLatinoPtr->getName() << ", ";
//         }
//         else{
//              cout << "PUERTO RICAN - " << currLatinoPtr->getName() << ", ";
//         }
//     }
//     cout << " }" << endl << endl;
// }

int main(){

    PuertoRican pr1 = PuertoRican("Jose", 15, false, true, {"Isabela", "Guaynabo"});
    PuertoRican pr2 = PuertoRican("Juan", 22, true, false, {"Mayaguez", "Aguada"});

    Dominican d1 = Dominican("Diego", 20, true, true, {"Higuey", "Puerto Plata"});
    Dominican d2 = Dominican("Derek", 21, true, false, {"Santo Domingo", "La Romana"});

    cout << "The name is: " << pr1.getName() << endl;
    // cout << "The name is: " << d1.getName() << endl;





    
}