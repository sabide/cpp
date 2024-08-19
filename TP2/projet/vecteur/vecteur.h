#ifndef vecteur_H
#define vecteur_H

#include <cassert>
#include <iostream>
class vecteur {

private:
    int n_;
    double* data_;
public:
    vecteur() : n_ {0}, data_ {nullptr} {std::cout << "cons 0" << std::endl;}
    vecteur(int n) : n_ {n}, data_ { new double[n]} {std::cout << "cons 1" << std::endl;}
    vecteur(int n,double* u) : n_ {n}, data_ { u } {std::cout << "cons 4" << std::endl;};
    vecteur(int n,double val) : n_ {n}, data_ { new double[n]} {
        for(int i=0;i<n_;++i)
            data_[i]=val;
        std::cout << "cons 2" << std::endl;
    }

   vecteur(const vecteur& u) : n_ {u.n_}, data_ { new double[u.n_]} {
    std::cout << "cons 3" << std::endl;
    for(int i=0;i<n_;++i)
            data_[i] = u[i] ;
    }
;    
    ~vecteur(){
        std::cout << "~vecteur " ; 
        if (data_!=nullptr){
            std::cout << " deallocate " ; 
            delete [] data_;
        }
        std::cout << std::endl ;
    }
    // version non-const
    double& operator[](int i) {  
        assert( data_!= nullptr && 0<=i && i<n_);
        return data_[i];
    }
    // version const 
    const double& operator[](int i) const {  
        assert( data_!= nullptr && 0<=i && i<n_);
        return data_[i];
    };
    friend void print_vecteur(const vecteur& );
    //

     vecteur& operator= (const vecteur& u){
       
        if (this != & u){
         if (this->data_==nullptr) {
            this->n_ = u.n_;
            this->data_ = new double [u.n_]  ;
             std::cout << "= "<< this  << std::endl;
         } else {
            for(int i=0;i<n_;++i)
                this->data_[i] = u.data_[i] ;
         }
        }
        return *this; 
    } 

    vecteur operator + (const vecteur& u) const {
        std:: cout <<"-" <<this << std::endl;
        vecteur sum {u.n_}  ;
        //std::cout << sum << std::endl;
         for(int i=0;i<u.n_;++i){
            sum.data_[i] = this->data_[i]  + u.data_[i];
        }
        return sum;    
    } 

     double operator * (const vecteur& u) const {
         double res=0;
         for(int i=0;i<u.n_;++i){
            res += this->data_[i]*u.data_[i];
        }
        return res;    
    } 

    vecteur operator * (double a) const {
         vecteur au {this->n_};
         for(int i=0;i<this->n_;++i){
            au[i] = this->data_[i]*a;
        }
        return au;    
    } 

     friend vecteur operator * (double a, vecteur& u)  {
         vecteur au {u.n_};
         for(int i=0;i<u.n_;++i){
            au[i] = u.data_[i]*a;
        }
        return au;    
    } 
    friend std::ostream & operator << ( std::ostream &os, const vecteur& u ){
       for(int i=0;i<u.n_;++i){
         os << u.data_[i] << " " ;
        }
        return os ; 

    } 

};

 void print_vecteur(const vecteur& u)  {
    for(int i=0;i<u.n_;++i){
         std::cout << u.data_[i] << " " ;
    }
    std::cout << std::endl;
    }

#endif