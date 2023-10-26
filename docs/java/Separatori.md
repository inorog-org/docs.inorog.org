---
sidebar_position: 9
---

# Separatori

 ***Separatorii*** indică **sfârșitul** unei *condiții, unei linii de cod, anumite porțuni din cod* și **începutul** *alteia*.

 ***Separatorii*** sunt *următorii*: ***( )***  ***[ ]*** ***;*** ***,***  ***.*** 

  ```java title="separatori.java"
public class Main {
  public static void main(String[] /* <-- paranteze patrate pentru specificarea argumentului op */args) {
    int n=5; // " ;  "  Acesta este separatorul pentru sfârșit de instrucțiune
    while(n)// separatorul ( ), acesta este folosit în cazul unui loop,  pentru condiția n>0
    { 
        n=n%10; // " ;  "  Acesta este separatorul pentru sfârșit de instrucțiune
        n=n/10; // " ;  "  Acesta este separatorul pentru sfârșit de instrucțiune
    }
  }
}
```

:::tip ***Observație***
***După*** fiecare ***instrucțiune*** din **program** se pune ***;***
:::
