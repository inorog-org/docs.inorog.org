---
sidebar_position: 6
---

# Variabile 

În această parte a lecției vom discuta despre :

+  ***Tipuri de variabile***

 a.Variabilă de tip primitivă

 b.Variabilă de tip referință

 c.Variabile locale

 d.Variabile statice

 e.Variabile dinamice



+ ***Declarare*** : 

 a.Pentru o *singura* variabila 

 b.Pentru *mai multe* variabile


+ ***Inițializare de variabile***

 a.Pentru o *singura* variabila 

 b.Pentru *mai multe* variabile


+ ***Afișare de variabile***

 a.Pentru o *singura* variabila 

 b.Pentru *mai multe* variabile


+ ***Identificatori***


+ ***Convenții***


Variabilele sunt ***containere*** pentru a stoca valorile datelor.

:::tip Containere
Containerele sunt pachete software(prestabilite) care conțin toate elementele necesare pentru a rula în orice mediu.
:::

## Tipuri de varibile

Variabilele pot fi de tip ***primitiv*** sau ***referință*** la obiecte.

### Variabilele de tip primitiv 

:::tip Variabilele de tip primitiv 
Variabilele de tip primitiv sunt: String,int,float,double,char,boolean,long.
:::


+ `String` - ***stochează*** elemente de tip **text** , cum ar fi "Salut",textul fiind pus ***OBLIGATORIU*** în **ghilimele duble**

```java title="text.java"
    public class Clase {
  public static void main(String[] args) {
   
     String x="Salut"; 
     String y="Buna";  //Acestea sunt exemplu pentru tipul String
    //............
  }
}
```

+ `int` - ***stochează*** numere **întregi** , **fără zecimale** , **mici si mijlocii**, ca de exemplu: 345 sau -345

```java title="intreg.java"
    public class Clase {
  public static void main(String[] args) {
   
     int x=345; 
     int y=-345;  //Acestea sunt exemplu pentru tipul int 
     //............
  }
}
```

+ `float` - ***stochează*** numere cu **zecimale** *puține* , ca de exemplu:  54,55 sau -54,55; 


```java title="flotant.java"
    public class Clase {
  public static void main(String[] args) {
   
     float x=54,55;
     float y=-54,55 //Acesta este un exemplu pentru tipul float 
     //Restul............
  }
}
```

+ `double` - ***stochează*** numere cu **zecimale** *multe*, ca de exemplu: 54,553421 sau -54,553421


```java title="dublu.java"
    public class Clase {
  public static void main(String[] args) {
   
     double x=54,553421;
     double y=-54,553421 //Acesta sunt un exemple pentru tipul double
    //Restul............
  }
}
```

+ `char`- ***stochează*** caractere individuale, ca de exemplu: 'D' sau 'e', la caractere punem ghilimele simple

```java title="caractere.java"
    public class Clase {
  public static void main(String[] args) {
   
     char x='D';
     char y='e' ////Acesta sunt  exemple pentru tipul char
    //Restul............
  }
}
```

+ `boolean` - ***stochează*** valori care au *două stări*, numai  adevărat(true) sau fals(false).

```java title="bool.java"
    public class Clase {
  public static void main(String[] args) {
   
     boolean x=true;
     boolean y=false; ////Acesta sunt  exemple pentru tipul boolean
    //Restul............
  }
}
```

+ `long` - ***stochează*** numere **întregi**, **fără zecimale ** , **mici , mijlocii si mari** , ca de exemplu: 34532101234 sau - 34532101234 

```java title="lung.java"
    public class Clase {
  public static void main(String[] args) {
   
     long x=34532101234; 
     long y=-34532101234;  ////Acesta sunt  exemple pentru tipul long
     //Restul............
  }
}
```

+ `final` + `long/int/char/float/boolean`- Aceasta este o constantă. Constanta nu este independentă așa că trebuie să specificăm ce tip de constantă vrem să folosim in programul nostru. De exemplu, constantele sunt 5 , B;

```java title="constanta.java"
    public class Clase {
  public static void main(String[] args) {
   
     final int X = 5; 
     final char Y = 'B';  //Acestea sunt exemple pentru tipul final
     // Restul............
  }
}
```

### Variabilele de tip referință

:::tip Variabilele de tip referință
Variabilele de tip referință sunt:Arrayurile(vectorii), clasele, interfetele(multitudine de metode).
:::

#### Variabile de referință de tip tablou vector

```java title="tablou.java"
    public class Clase {
  public static void main(String[] args) {
   
    long numere[];//Referinta de tip tablou
  }
}
```
#### Variabile de referință de tip interfață

```java title="referinta_interfata.java"
    public class Clase {
  public static void main(String[] args) {
   
    ObiectImportant caietulLuiDorel;//Referinta de tip interfata
  }
}
```
#### Variabile de referință de tip clasă

```java title="referinta_clasa.java"
    public class Clase {
  public static void main(String[] args) {
   
  Caietul caietulMeu;//Referinta de tip clasa
  }
}
```
### Variabilele locale

Variabilele locale sunt folosite pentru a rezolva o problema locala

```java title="local.java"
    public class Clase {
  public static void main(String[] args) {
   
     int x; //In interiorul metodei => variabila locala
     //............
  }
}
```

### Variabilele statice

Variabilele statice  sunt declarate inainte de metode si de aceea se intind pe toate durata programului.

```java title="statice.java"
    public class Clase {
        int x; //doar in interiorul clasei si NU a metodei => variabila statica
  public static void main(String[] args) {
     //............
  }
}
```

### Variabilele dinamice

Variabillele dinamice sunt tipurile de variabile a caror existenta depinde de catre programator. 

```java title="statice.java"
    public class Clase {
  public static void main(String[] args) {
    //.............
     int numere[ ] = new int[ 10 ]; //Aceasta variabila a fost creata la un moment dat => variabile dinamica(este si de referinta)
     //............
  }
}
```


## Declarare

 Pentru a declara o variabilă folosim formula:

  ```bash
  type variableName ;
 ``` 

Pentru a declara mai multe variabile folosim această formulă.

  ```bash
  type variableName, variableName2 ;
 ``` 

Pentru a declara o constantă:

 ```bash
  final type VARIABLENAME = value;
 ``` 

  ### Pentru o singura variabila 

 Pentru a declara o singura variabila folosim prima formulă.

  ```bash
  type variableName ;
 ``` 


 ```java title="a.java"
    public class Clase {
  public static void main(String[] args) {
   
     int a;//Am declarat variabila a
  }
}
```

  ### Pentru mai multe variabile

Pentru a declara mai multe variabile folosim a 2 formulă.

  ```bash
  type variableName, variableName2 ;
 ``` 

 ```java title="referinta_clasa.java"
    public class Clase {
  public static void main(String[] args) {
   
     int a,b;//Am declarat variabilele a si b
  }
}
```

##  Inițializare de variabile

 Pentru a inițiliza o variabilă folosim formula:

  ```bash
  type variableName = value ;
 ``` 
 Pentru a inițiliza mai multe variabile folosim formula:

  ```bash
  type variableName = value , variableName2 = value2 ;
 ``` 

 Pentru a declara o constantă:

 ```bash
  final type VARIABLENAME = value;
 ``` 

### Pentru o singura variabila 

 Pentru a inițiliza o variabilă folosim formula:

  ```bash
  type variableName = value ;
 ``` 

```java title="initializare.java"
    public class Clase {
  public static void main(String[] args) {
   
     int a=5;//Am declarat și inițializat variabila a
  }
}
```

 ### Pentru mai multe variabile

Pentru a inițiliza mai multe variabile folosim formula:

  ```bash
  type variableName = value , variableName2 = value2 ;
 ``` 

```java title="initializare.java"
    public class Clase {
  public static void main(String[] args) {
   
     int a=5, b=7;//Am declarat și inițializat variabila a și b
  }
}
```
## Afișare de variabile

Formulele de afisare sunt:

Pentru a afișa o varibilă:

 ```bash
   System.out.println(variableName);
 ``` 

 Pentru a afișa mai multe variabile:

 ```bash
   System.out.println(variableName);
   System.out.println(variableName2);
 ``` 

### Pentru o singura variabila 

Pentru a afișa o varibilă:

 ```bash
   System.out.println(variableName);
 ``` 

```java title="clase.java"
public class Clase {
  public static void main(String[] args) {
    int x=10;
    System.out.println(x);
  }
}
```

### Pentru mai multe variabile

 Pentru a afișa mai multe variabile:

 ```bash
   System.out.println(variableName);
   System.out.println(variableName2);
 ``` 

```java title="clase.java"
public class Clase {
  public static void main(String[] args) {
    int x=10,y=20;
    System.out.println(x);
    System.out.println(y);
  }
}
```

## Identificatori

Toate variabilele Java ***TREBUIE*** să fie *identificate* cu nume ***UNICE***.

Identificatori pot fi:

+ ***nume scurte***, de exemplu:x,y,z,a,b,c

+ ***nume descriptive***, de exemplu: suma,maxim,minim,varsta,volumTotal.

:::tip Observația 1
Folosirea numelor descriptive fac programul mai ușor de citit și înțeles, pentru cei ce nu au lucrat la proiect.
:::

```java title="identificatori.java"
    public class Clase {
  public static void main(String[] args) {
   
    //Perfect
     int secondsPerHour=3600;

    //Ok, dar nu înțelegi cine este s
     int s=3600;
  }
}
```
## Convenții

În limbajul Java avem câteva convenții fundamentale de numire. Următoarele criterii sunt:

+ ***variabilele finale***(constantele) se scriu cu ***MAJUSCULE***
+ dacă o **variabilă** ***NU*** este constantă atunci **prima literă** a **variabilei** se scrie cu ***literă mică*** dar dacă **variabila** conține **mai multe** **cuvinte** atunci **fiecare literă** de la ***începutul  cuvântului*** se scriu cu ***majusculă***.

