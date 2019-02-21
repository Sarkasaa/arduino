int analogValue = 0;
int counter = 0;

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
    for (counter = 0; counter <= 1; counter++)
    {
        bit1 = bitRead(counter, 0);
        bit2 = bitRead(counter, 1);
        bit3 = bitRead(counter, 2);

        digitalWrite(2, bit1);
        digitalWrite(3, bit2);
        digitalWrite(4, bit3);

        analogValue = analogRead(A0);

        Serial.print(analogValue);
        Serial.print(" ");
    }
    Serial.println("");
}
