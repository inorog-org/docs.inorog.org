---
sidebar_position: 3
---

# Comenzi uzuale git

## Comanda clone.

Comanda `git clone` este folosita pentru a face o copie a unui proiect stocat pe un git repository. Pentru a face aceasta clonare avem nevoie de adresa repository-ului.

Aceasta se poate gasi in sectiunea de **Code** din repository-ul dorit.

![Clone](../../repo/Screenshot_17.png)

De exemplu pentru a face o copie a proiectului **docs.inorog.org** folosim comanda:

```bash
git clone https://github.com/inorog-org/docs.inorog.org.git
```
![Clone 1](../../repo/Comenzi/Screenshot_18.png)

Dupa clonarea reusita a proiectului, vom avea un folder nou cu numele proiectului. Putem ajunde in acesta cu `cd nume-proiect` in exemplu nostru `cd docs.inorog.org`


:::tip De retinut
 Comanda `git clone` este folosită doar la inceputul lucrului la proiect sau in cazurile in care vrem sa clonam proiectul in alte locatii.
:::



## Comanda status

```bash
git status
```

:::tip De retinut
Comanda status îți arată ce modificări s-au făcut în editorul tău de cod dar nu s-au salvat în git. Dacă nu apare nicio notificare înseamnă că versiunea din editorul din cod coincide cu versiunea de pe git.
:::

![Status](../../repo/Comenzi/Screenshot_9.png)

## Comanda pull

```bash
git pull
```

:::tip De retinut
Comanda git pull aduce și instalează conținut dintr-o versiune trecută din repository și să actualizeze versiunea locală a acestuia.De asemenea noile modificări sunt salvate și valabile pentru toată lumea.
:::

![Pull](../../repo/Comenzi/Screenshot_10.png)
## Comanda commit

```bash
git commit
```

:::tip De retinut
Comanda git commit menține progresul pe care l-am obținut în cadrul unui proiect și îl actualizează pe parcurs.
:::

![Commit](../../repo/Comenzi/Screenshot_11.png)

## Comanda push

```bash
git push
```

:::tip De retinut
Comanda git push este folosită pentru a încărca conținutul salvat de pe versiunea locală pe versiunea unui repository cu variantă mai veche.
:::

![Push](../../repo/Comenzi/Screenshot_13.png)

## Comanda fetch

```bash
git fetch
```

:::tip De retinut
Comanda git fetch este folosită pentru a instala tot conținutul de pe o variantă veche a unui repository.
:::

![Fetch](../../repo/Comenzi/Screenshot_14.png)

## Comanda merge

```bash
git merge
```

:::tip De retinut
Comanda git merge îmbină toate modificarile de pe toate branch-urile.
:::

![Merge](../../repo/Comenzi/Screenshot_15.png)

## Comanda add

```bash
git add
```
:::tip De retinut
Comanda git add este comanda ce actualizează modificările din editorul de cod în git.
:::

![Add](../../repo/Comenzi/Screenshot_16.png)
