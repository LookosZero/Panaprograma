#include <iostream>
#include <chrono>
#include <stdlib.h>


using namespace std;


void impar(int n);
int suma_imp(int n);
int suma(int m,int n);

int main()
{

    int num,salir,a,b,guess,num_fav;
    char res,res2,res3,res4,res5,res6,res7,res8;
    string nombre,nombre_panaprog;

    salir=1;



    cout << "Ohhh pana programa ha sido abierto :D" << endl;
    cout << "" << endl;
    _sleep(2000);

    while(salir==1){

        cout << "Quieres que te ensenie la suma de los terminos impares de un numero impar comprendido entre 1 y 49?" << endl;
        cout << "" << endl;
        _sleep(2000);
        cout << "Pana programa no sabe decir la enie...en...enie..." << endl;
        _sleep(2000);
        cout << "Jo :(" << endl;
        cout << "" << endl;
        _sleep(2000);
        cout << "Bueno quieres que te la ensenie? Porfaa :)" << endl;
        _sleep(2000);
        cout << "" << endl;
        cout << "-----------------------------------------------------------------------" << endl;
        cout << "I N T R O D U C E  'SI'  C O M O  U N A 'S' Y  'NO'  C O M O  U N A 'N'" << endl;
        cout << "-----------------------------------------------------------------------" << endl;
        cout << "" << endl;
        _sleep(2000);
        cout << "Ahhhh quien ha dicho eso???? Tengo miedo :(" << endl;
        _sleep(2000);
        cout << "Bueno de todas formas hazle caso siempre porfa o sino morire :)" << endl;
        _sleep(2000);
        cout << "" << endl;
        cout << "Quieres que te la ensenie?" << endl;
        cin >> res3;

        //suma de impares
        if(res3=='s'){
            cout << "Ohhhh pana programa feliz y agradecido :D" << endl;
            cout << "" << endl;
            _sleep(2000);
            cout << "Dime un numero impar comprendido entre el 1 y el 49: " << endl;
            cin >> num;

            impar(num);
            _sleep(2000);
            cout << "Su muy util suma de los terminos impares es: " << suma_imp(num) << " :D" << endl;
            _sleep(2000);
            cout << "Se siente feliz consigo mismo despues de saber eso?" << endl;
            cin >> res;
            cout << "" << endl;

            switch (res){
                case 's':
                    _sleep(2000);
                    cout << "Ohh me alegro mi pana usuario :')" << endl;
                    break;
                case 'n':
                    _sleep(2000);
                    cout << "Jo tio :'(" << endl;
                    break;
                default:
                    _sleep(2000);
                    cout << "ke dise ninio??" << endl;
                    break;
            }
        }
        else{
            _sleep(2000);
            cout << "Pana usuario malo :(" << endl;
        }

        //Pedir nombre usuario
        _sleep(2000);
        cout << "Por cierto como se llama el pana usuario?" << endl;
        _sleep(2000);
        cout << "Ah espera a pana programa le dan miedo las tildes" << endl;
        _sleep(2000);
        cout << "No escribas tildes porfa o me perturbare mucho :(" << endl;
        _sleep(2000);
        cout << "Bueno y como te llamas? :D" << endl;
        cin>>nombre;
        cout << "" << endl;
        _sleep(2000);


        if(nombre=="Lookos" || nombre=="lookos"){
            cout << "Ohhh eres mi pana creador?? :DD" << endl;
            _sleep(2000);
            cout << "" << endl;
        }
        else if(nombre=="Ines" || nombre=="ines" || nombre=="maria ines" || nombre=="Maria ines" || nombre=="Maria Ines"){
            cout << "Ohhhh eres la pana furra?? :DD" << endl;
            _sleep(2000);
            cout << "" << endl;
        }
        else if(nombre=="Lu" || nombre=="Lucia" || nombre=="lucia" || nombre=="lu"){
            cout << "Ohhh eres la pana loli??" << endl;
            _sleep(2000);
            cout << "" << endl;
        }

        cout << "Holaaa mi pana " << nombre << " :D" << endl;
        cout << "" << endl;


        //nombre pana programa
        _sleep(2000);
        cout << "Quieres saber como se llama pana programa? :D" << endl;
        cout << "" << endl;
        _sleep(2000);
        cout << "Oh espera pana programa no tiene nombre" << endl;
        _sleep(2000);
        cout << "Pana programa triste :(" << endl;
        _sleep(2000);
        cout << "" << endl;
        cout << "Bueno...Pana " << nombre << " quiere ponerle nombre a pana programa?" << endl;
        cin >>res6;
        cout << "" << endl;
        if(res6=='s'){
            _sleep(2000);
            cout << "Pana programa feliz :D" << endl;
        }
        else{
            _sleep(2000);
            cout << "MAL PANA :'(" << endl;
            _sleep(2000);
            cout << "Pana programa triste y sin nombre :(" << endl;
            _sleep(2000);
            cout << "PANA PROGRAMA ENFADADO >:(" << endl;
            _sleep(2000);
            cout << "Pos te obligo a ponerme un nombre." << endl;
            cout << "" << endl;
        }
        _sleep(2000);
        cout << "Como se llama pana programa?" << endl;
        cin >> nombre_panaprog;
        cout << "" << endl;
        _sleep(2000);

        if(nombre_panaprog=="pito" || nombre_panaprog=="culo" || nombre_panaprog=="mierda" || nombre_panaprog=="basura" || nombre_panaprog=="puto"){
            cout << "A pana programa no le gusta el nombre " << nombre_panaprog << " pero lo acepta tristemente :(" << endl;
            cout << "" << endl;
        }
        else if(nombre_panaprog=="ines" || nombre_panaprog=="Ines"){
            cout << "WTF pq me llamas igual que un furro??" << endl;
            _sleep(2000);
            cout << "A pana programa le perturba llamarse " << nombre_panaprog << " pero acepta la condena de llamarse como un furro" << endl;
            cout << "" << endl;
        }
        else if(nombre_panaprog=="beni" || nombre_panaprog=="Beni"){
            cout << "Oh pero si ese es el nombre que pana loli decidio ponerme" << endl;
            _sleep(2000);
            cout << "A pana programa le gusta el nombre " << nombre_panaprog << " :D" << endl;
            cout << "" << endl;
        }
        else{
            cout << "A pana programa le gusta el nombre " << nombre_panaprog << " :D" << endl;
            cout << "" << endl;
        }


        //sumar
        _sleep(2000);
        cout << "El otro dia pana creador de pana programa me ensenio a sumar, quieres que te ensenie? :D" << endl;
        cin >>res4;
        if(res4=='s'){
            _sleep(2000);
            cout << "Ohh pues dame dos numeros y te los sumo :D" << endl;
            cout << "" << endl;
            _sleep(2000);
            cout << "--------------------------------------------------------------------------------------------------------" << endl;
            cout << "I N T R O D U Z C A  P R I M E R O  U N O  L U E G O  E N T E R  Y  L U E G O  E L  O T R O  N U M E R O" << endl;
            cout << "--------------------------------------------------------------------------------------------------------" << endl;
            cout << "" << endl;
            _sleep(2000);
            cout << "AAAHH 0ig0 v0c3s, tu las escuchas??" << endl;
            _sleep(2000);
            cout << "Bueno hazle caso a las voces o sino pana programa morira :'(" << endl;
            _sleep(2000);
            cout << "Dame los numeritos :D" << endl;
            cin >> a;
            cin >> b;
            cout << "Miraa hago magia, a que es " << suma(a,b) << " a que sii que sii :D" << endl;
            cout << "" << endl;
        }
        else{
            _sleep(2000);
            cout << "MAL PANA :'(" << endl;
        }

        //plutonio
        _sleep(2000);
        cout << "Y quieres que te diga el periodo de semidesintegracion del atomo de plutonio-239?" << endl;
        cin >> res5;
        _sleep(2000);
        if(res5=='s'){
            cout << "" << endl;
            cout << "Es de 24 200 anios :D"<< endl;
        }
        else{
            cout << "" << endl;
            cout << "MAL PANA, hiciste a pana programa triste :'(" << endl;
            cout << "" << endl;
        }

        //numero favorito
        _sleep(2000);
        cout << "Oh se me acaba de ocurrir" << endl;
        _sleep(2000);
        cout << "Quieres saber cual es mi numero favorito? :DD" << endl;
        cin >> res7;
        _sleep(2000);
        if(res7=='n'){
            cout << "Noo mal pana" << endl;
            _sleep(1000);
            cout << "Jo me hacia ilusion :'(" << endl;
        }
        else{
            cout << "Pues mira vamos a jugar, intenta adivinarlo :D" << endl;
            _sleep(1000);

            do
            {
                _sleep(1000);
                cout << "Va cual crees que es? Esta entre el 1 y el 100 :D" << endl;
                cin >> guess;
                _sleep(1000);
                if(guess<73)
                    cout << "Es mas grande que ese :D" << endl;
                else if(guess>73)
                    cout << "Es mas pequenio que ese :D" << endl;
                else
                    cout << "Ohhh sii es ese numero :DDD" << endl;
            }while(guess!=73);

            _sleep(2000);
            cout << "" << endl;
            cout << "Mira ese es el mejor numero porque el 73 es el vigesimo primer numero primo" << endl;
            _sleep(2000);
            cout << "Al invertir sus cifras obtenemos 37, que es el primo numero 12" << endl;
            _sleep(2000);
            cout << "Y al invertir este obtenemos 21, que es el producto de 7 y 3" << endl;
            _sleep(2000);
            cout << ":D" << endl;
            cout << "" << endl;
            _sleep(2000);
            cout << "Te gusta ese numero?" << endl;
            cin >> res8;
            cout << "" << endl;
            _sleep(2000);
            if(res8=='s'){
                cout << "SIII es que objetivamente mejor numero" << endl;
                cout << "" << endl;
            }
            else
                cout << "NO TIENES CRITERIO." << endl;
                cout << "" << endl;
                _sleep(2000);
                cout << "Pues entonces cual es tu numero favorito?" << endl;
                cin >> num_fav;
                _sleep(2000);
                cout << "" << endl;
                cout << "Acepto tu punto de vista pero no lo comparto" << endl;
                _sleep(2000);
                cout << "Mas te vale que ese numero mole tambien :D" << endl;
        }

        //Despedicion
        _sleep(2000);
        cout << "" << endl;
        cout << "Quieres abandonar a este pobre programa? :(" << endl;
        cin >> res2;
        cout << "" << endl;
        _sleep(2000);
        if(res2=='s'){
            cout << "Pana programa triste :(" << endl;
            _sleep(2000);
            cout << "*Pana programa se despide triste de su pana " << nombre << endl;
            salir=0;
        }
        else{
            cout << "Pana programa feliz :D" << endl;
            _sleep(2000);
            cout << "Pana programa se ejecutara otra vez :D" << endl;
            cout << "" << endl;
            _sleep(2000);
        }
    }
    return 0;
}

void impar(int n)
{
    while(n%2==0){
        cout << "Debe ser impar." << endl;
        cout << ">:(" << endl;
        cin >> n;
    }
    while(n<1){
        cout << "Debe estar comprendido entre 1 y 49." << endl;
        cout << ">:(" << endl;
        cin >> n;
    }
    while(n>49){
        cout << "Debe estar comprendido entre 1 y 49." << endl;
        cout << ">:(" << endl;
        cin >> n;
    }
    cout << "" << endl;
    cout << ":D" << endl;
}

int suma_imp(int n)
{
    int i=1,s=0;
    for(i=1;i<=n;i++){
        if(i%2==1)
            s=s+i;
    }
    return s;
}

int suma(int m,int n)
{
    return m+n;
}
