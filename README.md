# Project1

### Übungsziel:
Genaues Lesen der Aufgabenstellung, Klassendefinition mit Daten- und
Funktionsmitgliedern, Konstruktor und Destruktor, Eingabe mit cin, Ausgabe mit cout.

### Aufgabenstellung:
Die Klasse cHaarFoehn hat folgende Attribute (Mitgliedsvariablen):
- BezeichnungLeistungsaufnahme (Watt)
- Anzahl Schaltstufen
- Farbe


Außerdem besitzt sie folgende Methoden (implementiert als öffentliche Methoden):
- eingabe() zur Abfrage der Werte der Attribute von der Tastatur,
  
- ausgabe() zur Ausgabe aller Attribute am Bildschirm.
  
- Erstellen Sie die Klasse cHaarFoehn.
  
- Definieren Sie geeignete Mitgliedsvariablen.
  
- Erstellen Sie den Standard-Konstruktor für diese Klasse. Werden bei der Instanziierung keine
  
Werte angegeben dann sollen folgende Werte vorgegeben werden:
- für Attribut Bezeichnung der Wert „unbestimmt“
  
- für die Leistungsaufnahme der Wert 0.0
  
- für die Anzahl Schaltstufen der Wert 0
  
- für die Farbe der Wert 0 (oder der enum-Wert schwarz, siehe unten)
  
- Implementieren Sie einen Parameter-Konstruktor, der die bei der Instanziierung angegebenen
Werte in die Attribute einträgt.

- Implementieren Sie die Ausgabe-Methode.
  
- Implementieren Sie die Eingabe-Methode.
  
- Erstellen Sie einen Destruktor, der ausgibt, dass das Objekt jetzt zerstört wird, und dessen
Attribute ausgibt, damit man erkennen kann, welches Objekt zerstört wird. Verwenden Sie auch
dort die Methode ausgabe().

- Erstellen Sie ein Hauptprogramm. Instanziieren Sie dort 3 Objekte vom Typ cHaarFoehn. Davon
eines mit dem Standardkonstruktor und zwei mit Werten für die Erzeugung.

- Lassen Sie jedes dieser Objekte seine Werte mittels der Ausgabefunktion anzeigen (zur
Überprüfung der Funktion des universellen Konstruktors).

- Lesen Sie für jedes der Objekte die Attributwerte von der Tastatur ein, verwenden Sie dazu Ihre
Eingabe-Methode.

- Lassen Sie jedes dieser Objekte seine Werte mit der Ausgabefunktion erneut anzeigen.
  
- Der Destruktor wird automatisch bei der Auflösung der Objekte aufgerufen, überprüfen Sie dessen
korrekte Funktion.

### Hinweise:
Für das Attribut „Bezeichnung“ können Sie den Datentyp „string“ verwenden. Beachten Sie dazu
bitte die entsprechenden Folien zum Datentyp „string“ im Foliensatz.
Für das Attribut „Farbe“ können Sie zunächst einen Ganzzahlwert nehmen. Wenn Sie Ihre CKenntnisse vertiefen möchten, ist dazu eine gute Gelegenheit, die Farbe als einen „enum“ zu
definieren (schwarz, rot, blau, gelb, weiß) und zu verwenden, Sie müssen dabei die Eingabewerte
umsetzen (Cast), und auch die Ausgabe (am besten über einen switch).
