
#include <iostream>
using namespace std;

class mobile_phone {
public:
    int size = 15;
    int width = 7;
    string brand = "iphone";
    int serial_number = 15;
    string color = "black";
    string alarm = "loud";

    void Noize(string alarm) {
        cout << "Time to wake up!" << alarm << "\n";
    }
    void Call(string ringtone) {
        cout << "Someone is calling!" << ringtone << "\n";
    }
    void count(string calculator) {
        cout << "how much will it be?" << calculator << "\n";
    }
    void Update() {
        cout << "Your iphone is updating...\n";
    }
    void Discharge() {
        cout << "little quantity of energy left\n";
    }

};
class human {
public:
    int height = 192;
    int ears_count = 2;
    double weight = 65.3;
    string name = "Jonathan";
    string eyes_color = "green";
    string noize = "knock";

    void MakeNoize(string noize) {
        cout << "Jonathan is knocking!" << noize << "\n";
    }
    void Eat(string meal) {
        cout << "Jonathan is eating" << meal << "\n";
    }
    void Hobby(string entertainment) {
        cout << "Jonathan is playing games" << entertainment << "\n";
    }
    void Feel() {
        cout << "Jonathan is stressed\n";
    }
    void sleep() {
        cout << "Jonathan is sleeping\n";
    }
    void Wakeup(mobile_phone& who) {
        cout << "Jonathan is wake up\n";
    }
    void opening_door() {
        cout << "Jonathan is opening door\n";
    }
};
class sadhuman : public human {
private:
    void Feel() {
        cout << "Human is feeling bad\n";    //Домашнее задание до 23.09
    }
};

class room {
public:
    int height = 250;
    int width = 500;
    int window = 2;
    string name = "bedroom";
    string walls_color = "yellow";

    void Noize(human& who) {
        cout << "Someone knocking on the door\n";
    }
    void exist() {
        cout << "Room is existing\n";
    }
    void Destroy() {
        cout << "Walls are falling\n";
    }
    void Repair(human& who) {
        cout << "room is repared by humans\n";
    }
    void Feel() {
        cout << "room can`t feel anything, maybe";
    }
};
class food {
    string type = "cereal";
    double weight = 5.4;
};

class weights {
public:
    int size = 11;
    int width = 5;
    string color = "gray";
    string weight_plat = "blue";
    int button = 5;
    string fuction = "weighting";

    void inclusion(string button_on) {
        cout << "00000" << button_on << "\n";
    }
    void unit(string button_unit) {
        cout << "turn on oz mode" << button_unit << "\n";
    }
    void weighting(human& who) {
        cout << "calculating weight" << "\n";
    }
    void light(string light_button) {
        cout << "info platform is glowing";
    }
    void pcs() {
        cout << "show pcs\n";
    }
};

class door {
public:
    int size = 190;
    int width = 100;
    string color = "brown";
    string kh_color = "gold";
    string handle_size = "black";
    string handle;

    void open() {
        cout << "door is opening\n";
    }
    void close() {
        cout << "door is closing\n";
    }
    void closing(string key) {
        cout << "door is closing with a key" << key << "\n";
    }
    void opening(string key) {
        cout << "door is opening with a key" << key << "\n";
    }
    void opening_handle(human& who) {
        cout << "handle going down" <<  "\n";
    }
};
class Notebook {
private:
    string model;
    int battery;
    int price;
public:
    void setprice(int p) {
        if (p >= 0)
        {
            price = p;
        }
        else
        {
            cout << "no\n";
        }
    }
    string model() {
        return model;
    }
};

int main()
{
    Notebook n;
    mobile_phone m;
    door d;

    human h;
    h.weight = 65.3;
    h.ears_count = 2;

    human h1;
    h1.weight = 68;
    h1.ears_count = 2;     //Домашнее задание на 23.09

    sadhuman h2;
    h2.Feel(); //не понимаю почему тут ошибка

    m.alarm = "time to wwake up\n";
    h.Wakeup(m);

    h.noize = "*knock knock*";
    room r;
    r.Noize(h);

    r.name = "bedroom\n";
    r.Repair(h);

    weights w;
    w.fuction = "weighting";
    w.weighting(h);

    d.handle = "handle is going down";
    d.opening_handle(h);
}


