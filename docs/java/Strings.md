---
sidebar_position: 11
---

# Strings (Șiruri de caractere)

## Șiruri de caractere

### Șirul de caractere-Exemplu

Șirul de caractere (String) este o variabilă care conține caractere care se află între niște " "- ghilimele duble

 ```java title="String.java"
    public class String {
  public static void main(String[] args) {
   
     String sal = "Salut";//Variabila sal de tip String are valoarea "Salut"

  }
}
```

### Lungimea caracterului

Șirul de caractere este un obiect ,acesta conține metoda prin care se pot realiza operații. 
Lungimea unui șir in Java se găsește cu metoda length();

 ```java title="String.java"
    public class String {
  public static void main(String[] args) {
   
     String sal = "Salut";//Variabila sal de tip String are valoarea "Salut"
     System.out.print(" Șirul are " + sal.length()+ " litere "); //Output 5 litere

  }
}
```

### Mai multe metode cu șiruri

Sunt diferite metode ,dar cele pe care le vom face sunt

  -toUpperCase()- SCRIE CU MAJUSCULE

  -toLowerCase()- scrie cu litere mici

#### toUpperCase() 

Aceasta metodă afișează textul scris cu majuscule.

 ```java title="LiteraMare.java"
    public class LiteraMare {
  public static void main(String[] args) {
   
     String sal = "Salut";//Variabila sal de tip String are valoarea "Salut"
     System.out.print(sal.toUpperCase()); //Output SALUT
  }
}
```

#### toLowerCase() 
 
Aceasta metodă afișează textul scris cu litere mici.

 ```java title="LiteraMică.java"
    public class LiteraMică {
  public static void main(String[] args) {
   
     String sal = "Salut";//Variabila sal de tip String are valoarea "Salut"
     System.out.print(sal.toLowerCase()); //Output salut
  }
}
```

### Gasireau caracter într-un șir

Pentru a găsi indexul(poziția) aprimei apariții a unui text specificat într-un șir (inclusiv spații albe), folosim metoda indexOf().

 ```java title="Indexul.java"
    public class Indexul {
  public static void main(String[] args) {
   
     String sal = "Salut ,sunt eu un haiduc";//Variabila sal de tip String are valoarea "Salut ,sunt eu un haiduc"
     System.out.print(sal.indexOf("eu")); //Output 3
  }
}
```

## Concatenare

Concatenarea șirurilor se poate face în două feluri:

  -Cu operatorul +
  -Cu metoda concat()

### Cu operatorul +

Poți concatena două șiruri de caractere folosind operatorul + .

 ```java title="Plus.java"
    public class Plus {
  public static void main(String[] args) {
   
     String sal1 = "Salut";//Variabila sal de tip String are valoarea "Salut"
     String sal2 = "sunt eu un haiduc";//Variabila sal de tip String are valoarea "sunt eu un haiduc"
     System.out.print(sal1 +" "+ sal2); //Output Salut sunt eu un haiduc 
  }
}
```

### Cu metoda concat()

Poți concatena două șiruri de caractere folosind metoda concat().

```java title="MetCon.java"
    public class MetCon {
  public static void main(String[] args) {
   
     String sal1 = "Salut";
     String sal2 = "sunt eu un haiduc";//Variabila sal de tip String are valoarea "Salut"
     System.out.print(sal1.concat(sal2)); //Output Salut sunt eu un haiduc 
  }
}
```

## Caractere speciale


