---
sidebar_position: 8
---

# Casting de tip Java

Vom discuta despre

+ ***Casting*** de tip Java

  + **Lărgirea turnării**

  + **Îngustarea turnării**

Casting reprezintă atribuire unei valori de tip primitiv altui tip.

***Castingul*** este de două feluri 

  + **Lărgirea turnării**

  + **Îngustarea turnării**

## Lărgirea turnării

 ***Lărgirea tunării*** se face la ***trecerea*** a unui tip de date mai **mic** la un tip de date mai **mare**.

```java title="CastingLărgire.java"
public class Main {
  public static void main(String[] args) {
    int intMe = 5;
    double doubleMe = intMe; // Casting automat: de la int la double

    System.out.println(intMe);      // Afișează 5
    System.out.println(doubleMe);   // Afișează 5.0
  }
}
```

  ## Îngustarea turnării

 ***Îngustarea tunării*** se face la trecerea a unui tip de date mai **mare** la un tip de date mai **mic**. Aceasta trebuie făcută **manual** ,tipul de date fiind scris între **paranteze** rotunde în fața valorii.

 ```java title="CastingIngustare.java"
public class Main {
  public static void main(String[] args) {
    double doubleMe = 5.99d;
    int intMe = (int) doubleMe; // Casting manual:  de la double la int

    System.out.println(doubleMe);   // Afișează 5.99
    System.out.println(intMe);      // Afișează 5
  }
}
```

