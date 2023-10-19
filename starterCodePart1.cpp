#include <iostream>
#include <vector>
using namespace std;

class Dominican{
    private:
        bool speaksSpanish;
        bool pronouncesRs;
        int age;
        string name;

        vector<string> dominicanTowns;

        public:
    Dominican(string paramName, int paramAge, bool paramSpeaksSpanish, bool paramPronouncesRs, vector<string>paramDominicanTowns){
        
    }

    // getters
    string getName(){return name;}
    int getAge(){return age;}
    bool doesSpeakSpanish() {return speaksSpanish; }
    bool doesPronounceRs() {return pronouncesRs; }

    vector<string> getDominicanTowns() {return dominicanTowns; }

    // setters
    void setName(string newName) {this->name = newName; }
    void setAge(int newAge){this->age = newAge;}
    void setSpeaksSpanish(bool newSpeakSpanish) { this->speaksSpanish = newSpeakSpanish;}
    void setPronouncesRs(bool newPronouncesRs) { this->pronouncesRs = newPronouncesRs;}

    void setDominicanTowns(vector<string> newDominicanTowns) {this->dominicanTowns = newDominicanTowns; }
};


class PuertoRican{
    private:
        bool speaksSpanish;
        bool pronouncesRs;
        int age;
        string name;

        vector<string> puertoRicanTowns;

    public:

         PuertoRican(string paramName, int paramAge, bool paramSpeaksSpanish, bool paramPronouncesRs, vector<string>paramPuertoRicanTowns){
            this->name = paramName;
    }

    // getters
    string getName(){return name;}
    int getAge(){return age;}
    bool doesSpeakSpanish() {return speaksSpanish; }
    bool doesPronounceRs() {return pronouncesRs; }

    vector<string> getPuertoRicanTowns() {return puertoRicanTowns; }

    // setters
    void setName(string newName) {this->name = newName; }
    void setAge(int newAge){this->age = newAge;}
    void setSpeaksSpanish(bool newSpeakSpanish) { this->speaksSpanish = newSpeakSpanish;}
    void setPronouncesRs(bool newPronouncesRs) { this->pronouncesRs = newPronouncesRs;}

    void setPuertoRicanTowns(vector<string> newPuertoRicanTowns) {this->puertoRicanTowns = newPuertoRicanTowns;}
};


int main(){

    PuertoRican pr1 = PuertoRican("Jose", 15, false, true, {"Isabela", "Guaynabo"});
    PuertoRican pr2 = PuertoRican("Juan", 22, true, false, {"Mayaguez", "Aguada"});

    cout << "The name is: " << pr1.getName() << endl;



    
}