#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DallasTemperature.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); 

#define ONE_WIRE_BUS 2 
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

#define TRIGPIN 12
#define ECHOPIN 11

void setup() {
  lcd.begin(16, 2);
  lcd.backlight();

  Serial.begin(9600);

  sensors.begin();

  pinMode(TRIGPIN, OUTPUT);
  pinMode(ECHOPIN, INPUT);

  lcd.setCursor(0, 0);
  lcd.print("Inicializando");
  lcd.setCursor(0, 1);
  lcd.print("Sensores...");
  delay(2000);
}

void loop() {

  sensors.requestTemperatures();
  float temperatura = sensors.getTempCByIndex(0);

  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGPIN, LOW);
  
  long duracao = pulseIn(ECHOPIN, HIGH);
  float distancia = duracao * 0.034 / 2;

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperatura);
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("Dist: ");
  lcd.print(distancia);
  lcd.print(" cm");

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" C");
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  delay(2000); 
}
