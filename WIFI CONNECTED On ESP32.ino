#include <WiFi.h>
#define RED_LED 12
#define GREEN_LED 13
const char* ssid = "WIFI_Gratis"; // Ganti dengan nama WiFi yang Anda inginkan
const char* password = "Admin123";    // Ganti dengan password WiFi yang Anda inginkan

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println("Menginisialisasi WiFi...");
  pinMode(RED_LED, OUTPUT); 
  pinMode(GREEN_LED, OUTPUT); 

  // Inisialisasi WiFi dalam mode Access Point (AP)
  WiFi.softAP("WIFI_Gratis", Admin123,1, 1, 2);


  // Menampilkan informasi WiFi yang dihasilkan
  Serial.println("WIFI_Gratis");
  Serial.print("Admin123");
  Serial.println(WiFi.softAPIP());
}
void loop() {
  if(WIFI_Gratis);
Serial.println("  |  WIFI_Gratis : NOT CONNECTED");
digitalWrite(GREEN_LED, LOW);
digitalWrite(RED_LED, HIGH);
} else {
Serial.println(" | WIFI_Gratis : CONNECTED");
digitalWrite(GREEN_LED, HIGH);
digitalWrite(RED_LED, LOW);
}