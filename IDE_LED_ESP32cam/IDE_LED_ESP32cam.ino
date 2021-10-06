/*  Alejandro Flores Jacobo para curso CodigoIoT
 *  Creditos: CodigoIoT/Sensórica, https://edu.codigoiot.com/ 
 *  Fecha: 05/10/21
 *  
 *  Este es un ejemplo simple de un script que enciende y apaga un LED 
 *  durante un segundo de forma alternada indefinidadmente
 *  Este código estaba pensado para usarse con la placa Photon, se uso
 *  la placa ESP32cam y FTDI 
 *   
 *   Conexión
 *   GPIO12 --> led = 12
*/

int led = 12; // LED conectado a GPIO12

// Esta rutina corre una sola vez cuando reinicia el dispositivo
void setup()
{
   pinMode(led, OUTPUT); // Initializa D0 pin como salida
}

// Esta rutina corre indefinidamente
void loop()
{
   digitalWrite(led, HIGH);  // Enciende el LED
   delay(1000);              // Espera 1000ms = 1 segundo
   digitalWrite(led, LOW);   // Apaga el LED
   delay(1000);              // Espera 1 segundo
}
