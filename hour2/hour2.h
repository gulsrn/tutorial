#ifndef HOUR2_H
#define HOUR2_H


#include <iostream>


//hour2


int add(int x, int y){
    return (x+y);
}
//

int subtraction (int a, int b){

    return (a-b);

}




int  multiply (int i, int j ){


    return (i*j);


}

float division (float c,  float g){

    return (c/g);

}

int beforeafter (int k, int l, int z){
    std:: cout << "before\n\n k: "<<k <<" l:"<<l ;
    std:: cout <<" z: " << z <<"\n\n";

    int returnvalue = z = k = l + 13;

    std:: cout << "after\n\n  k: "<<k <<" l:"<<l ;
    std:: cout <<" z: " << z <<"\n";

    return(returnvalue);
    //ekrana yeni değeri atayamadım.
}
int toplamatama (int a){
    return (++a);
}

int toplamatamaa (int b){
    return (b++);
}
// arttırma örneği

int arttırma (int year){
    std:: cout << "the year " << ++year <<"passes. \n";
    std:: cout << "the year " << ++year <<"passes. \n";
    std:: cout << "the year " << ++year <<"passes. \n";
    std:: cout <<"\n It is now:" <<year << ".\n\n";

    std:: cout << "the year " << year++ <<"passes. \n";
    std:: cout << "the year " << year++ <<"passes. \n";
    std:: cout << "the year " << year++ <<"passes. \n";
    std:: cout << "\nIt is now" <<year <<".";


    return (year);
}

//öncelik
int oncelik (int p){

    return (p);


}
// if komutu örneği
int  ifkomutu (int e){

    std:: cout <<"Enter a grade (1-100): ";

    if( e >= 0 && e <= 100 ){

        if (e <= 70){
            std::cout <<"\nPass\n";

        }else if( e <= 100 ){
            std:: cout <<"\n yes\n";

        }else{
            std:: cout <<"\nFail\n";
        }

    }else{
        std::cout << "Lütfen Geçerli Not Giriniz\n";
    }


    if( e <= 70 ){

        int a = e*2;
    }



    std::cout << "sdazfgdsfg";


    return (e);
}
// if ile dışarıdan parametre alıcaz!!ve iç içe if komutlarını yapamadım

int ornek2 (int zombies ){

    if (zombies ==0)

        std:: cout <<"no more zombies\n";

    else

        std::cout <<"Beware the zombie apocalypse!\n";

    return (zombies);
}






#endif // HOUR2_H
