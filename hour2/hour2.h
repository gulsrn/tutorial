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
    std:: cout << "after\n\n  k: "<<k <<" l:"<<l ;
    std:: cout <<" z: " << z <<"\n";

    return(z=k=l+13);
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

           std::cout <<"Enter a grade (1-100): ";
           if (e<=70)
             std::cout <<"\nPass\n";

           else if (e<=100)
               std:: cout <<"\n yes\n";
           else
               std:: cout <<"\nFail\n";
           return (e);
       // if ile dışarıdan parametre alıcaz!!


       }

#endif // HOUR2_H
