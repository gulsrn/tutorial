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



}




#endif // HOUR2_H
