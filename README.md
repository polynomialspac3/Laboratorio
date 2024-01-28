# Laboratorio di Programmazione 2023-24
 
#### Classe che carica file di risorse e aggiorna una progress bar (usare design pattern Observer). 
#### Visualizzazione con QT

## Struttura del progetto

- **CaricatoreFile.h/cpp**: Classe che eredita da `Subject` e `QPushButton`.
- **Barra.h/cpp**: classe `barra` che eredita da `Observer` e `QProgressBar` e  `QLabel` .
- **File.h/cpp**: classe `File` simula una risorsa che verrà "caricata" da `CaricatoreFile`.
- **Observer.h/cpp**: Dichiarazione della classe `Observer`.
- **Subject.h/cpp**: Dichiarazione della classe `Subject`.

- **main.cpp**: Crea una finestra di tipo `QMainWindow` 


## Test

i test sono implementati con Google Test:

- **Test percentuale (percentuale):**
  - Verifica che il metodo **`carica`** di `CaricatoreFile` notifichi correttamente a `Barra` con la percentuale specificata.
  - Verifica che update di `Barra` aggironi correttamente il valore della percentuale

- **Test rimuovi observer (removeObs):**
  - Verifica che il metodo **`removeObserver`** del CaricatoreFile rimuova correttamente l'observer specificato

- **Test rimuovi observer (detachObs):**
  - Verifica che il metodo **`detach`** dell'observer `Barra` rimuova correttamente se stesso dalla lista degli observer del subject.




