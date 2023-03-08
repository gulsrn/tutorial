#ifndef HOUR3_H
#define HOUR3_H


#include <iostream>




bool Gectimi( const int & Not ){


    if( Not >=0 && Not<=100 ){

        if( Not>=50 && Not <= 70 ){
            std::cout << "normal Gecti\n";
            return (true);
        }
        else if ( Not>= 71 && Not <= 100 ){
            std::cout << "Gecti\n";
            return (true);
        }
        else{
            std::cout << "Sinifta Kaldi\n";
            return (false);




    }
    }
        else{
        std::cout << "Lutfen Gecerli Bir Not Giriniz\n";
        return (false);
    }


}




#endif // HOUR3_H
