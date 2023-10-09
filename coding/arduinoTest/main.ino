#define F_CPU 16000000UL
#define YELLOW_LIGHT 13

void welcome() {
    digitalWrite(YELLOW_LIGHT, HIGH); 
    delay(1000);
    digitalWrite(YELLOW_LIGHT, LOW);
}

void setup() { 
    Serial.begin(9600); 
    pinMode(YELLOW_LIGHT, OUTPUT);
}

void loop() [
    Serial.println("Hello World"); 
    for (int i = 0; i < 10; i++) { 
        welcome(); 
    }
]