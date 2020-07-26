//Projeto 5 - Interruptor de luz
int botao = 7;
int led = 13;
bool estadoLed = 0;

void setup()
{
	pinMode(botao, INPUT_PULLUP); // define o pino do botao como entrada "INPUT"
	pinMode(led, OUTPUT);
}

void loop()
{
	/* Botão possui dois valores:
	- HIGH: não está pressionado = 1
	- LOW: pressionado = 0 */

	#pragma region Solução flipflop
	// if (digitalRead(botao) == LOW) // Se o botão for pressionado
	// {
	// 	estadoLed = !estadoLed; // troca o estado do LED
	// 	digitalWrite(led, estadoLed);
	// 	while (digitalRead(botao) == LOW);
	// 	delay(100);
	// }
	#pragma endregion

	#pragma region Solução interna
	while (digitalRead(botao) == LOW) 
	{
		digitalWrite(led, HIGH);
	}
	delay(100);
	digitalWrite(led, LOW);
	#pragma endregion
}