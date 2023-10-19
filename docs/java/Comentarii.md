---
sidebar_position: 5
---

# Comentarii

**Comentariile** sunt *folosite* pentru a *explica* codul scris în **Java** pentru a fi **înțeles** de către celelalte *persoane* care **lucrează** la proiect. De asemenea, acesta este folosit pentru **evitarea testării codului alternativ**.

***Comentariile*** sunt de *trei* tipuri:


 -**Comentarii** pe o *singura* linie: 

     //acesta este un comentariu pe o singura linie
      
Exemplul 1:

   ```java title="clase.java"
public class Clase {
  public static void main(String[] args) {

    //se afiseaza "Hello World"

    System.out.println("Hello World");
  }
}
```        
-**Comentarii** pe *mai multe* linii:

    /*  
      Comentariu 
       pe 
       mai 
       multe 
       linii */

Exemplul 2:

 ```java title="clase.java"
public class Clase {
  public static void main(String[] args) {

    /* 
      Se afiseaza "Hello World"    
    */

    System.out.println("Hello World");
  }
}
```       

-**Comentarii** pe *mai multe* linii care țin de *documentație*:

    /**  
      a^2=b^2+c^2
    
         |\
         | \
     b   |  \  a
         |   \
         |____\
            c
       */

Exemplul 3:

 ```java title="triunghiDreptunghic.java"
import java.util.Scanner;
class triunghiDreptunghic {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a,b,c,k;
         k=0;
         a= scan.nextInt();
         b= scan.nextInt();
         c= scan.nextInt();
         
         if(a*a==b*b+c*c)k=1;
         
         System.out.println(k);
        
    }
}
/**
 * Am verificat dacă un triunghi este drepthunghic
 * Am declarat o clasă pentru a citi cele trei numere
 * Am făcut clasa Hello World pentru a verifica acest lucru
 * Am scris metoda main() și în interiorul ei m-am folosit de faptul că am creat o clasă mai sus și am creat obiectul Scanner pentru a citi 
 * Am luat trei variabile care reprezinta valoarea triunghiului si una boolean pentru a verifica daca se indeplineste conditia de triunghi 
 * Am citit cele trei numere a,b,c
 * Am verificat printr-un if daca se îndeplinește RTP
 * Am afisat k pentru a vedea daca este triunghi dreptunghic
 */

```
