int potiWert = 0;
int zaehler = 0;

int bit1 = 0;
int bit2 = 0;
int bit3 = 0;

void setup()
{
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    for (zaehler = 0; zaehler <= 1; zaehler++)
    {
        bit1 = bitRead(zaehler, 0);
        bit2 = bitRead(zaehler, 1);
        bit3 = bitRead(zaehler, 2);

        digitalWrite(2, bit1);
        digitalWrite(3, bit2);
        digitalWrite(4, bit3);

        potiWert = analogRead(A0);

        Serial.print(potiWert);
        Serial.print(" ");
    }
    Serial.println("");
}
