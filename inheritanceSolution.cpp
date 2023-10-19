#include <iostream>
#include <vector>
using namespace std;

class Anthem{

    virtual void singAnthem() = 0;
};


class Latino :public  Anthem{

    protected:
        bool speaksSpanish;
        bool pronouncesRs;
        int age;
        string name;
    public:

    Latino(string paramName, int paramAge, bool paramSpeaksSpanish, bool paramPronouncesRs){
        cout << endl << "Inside Latino Constructor!!" << endl;
        this->name = paramName;
        this->age = paramAge;
        this->speaksSpanish = paramSpeaksSpanish;
        this->pronouncesRs = pronouncesRs;
    }

    // getters
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
        cout << "singing a Latino Anthem" << endl; 
    }
};


class Dominican : public Latino{
    private:
        vector<string> dominicanTowns;

    public:
    Dominican(string paramName, int paramAge, bool paramSpeaksSpanish, bool paramPronouncesRs, vector<string>paramDominicanTowns) : Latino( paramName,  paramAge,  paramSpeaksSpanish,  paramPronouncesRs){
        cout << "inside Dominican constructor!" << endl; 
        this->dominicanTowns = paramDominicanTowns;
    }

    void singAnthem(){
        cout << "Singing Dominican Anthem" << endl;
    }

    vector<string> getDominicanTowns() {return dominicanTowns; }

   

    void setDominicanTowns(vector<string> newDominicanTowns) {this->dominicanTowns = newDominicanTowns; }
};


class PuertoRican : public Latino{
    private:

        vector<string> puertoRicanTowns;

    public:

         PuertoRican(string paramName, int paramAge, bool paramSpeaksSpanish, bool paramPronouncesRs, vector<string>paramPuertoRicanTowns) :  Latino( paramName,  paramAge,  paramSpeaksSpanish,  paramPronouncesRs){
            
            cout << "Inside Puerto Rican Constructor" << endl << endl;
            this->puertoRicanTowns = paramPuertoRicanTowns;
    }

    void singAnthem(){
        cout << "singing PuertoRican anthem" << endl << endl;
    }

    vector<string> getPuertoRicanTowns() {return puertoRicanTowns; }


    void setPuertoRicanTowns(vector<string> newPuertoRicanTowns) {this->puertoRicanTowns = newPuertoRicanTowns;}
};


int main(){

    // PuertoRican pr1 = PuertoRican("Jose", 15, false, true, {"Isabela", "Guaynabo"});
    // // PuertoRican pr2 = PuertoRican("Juan", 22, true, false, {"Mayaguez", "Aguada"});

    Dominican d1 = Dominican("JJ", 22, true, true, {"Higuey", "Puerto Plata"});
    // cout << "The name is: " << d1.getName() << endl << endl;

    // Latino l1 = Latino("Diego", 21, true, true);
    // pr1.singAnthem();

    Latino* latinoPtr = &d1;

    latinoPtr->singAnthem();

    Latino latino = d1;

    latino.singAnthem();

    // l1.singAnthem();


    
}