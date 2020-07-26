// Projeto 13 - Alarme de movimento

//Inicializando variáveis com as portas do Arduino correspondentes aos componentes
int pinoTilt = 7;
int pinoBuzzer = 10;

void setup()
{
	//setando o pinoTilt como INPUT, já que leremos dados dele
	pinMode(pinoTilt, INPUT);
}

void loop()
{
	//Se o valor do tilt for HIGH, ou seja, existe um valor para ele
	//Isso significa que o protoboard ou algo nas proximidades foi movimentado
	if (digitalRead(pinoTilt) == HIGH)
	{
		//O buzzer emite um alerta
		tone(pinoBuzzer, 440);
		delay(1000);
	}
	else
	{
		//caso contrário, o alerta é interrompido
		noTone(pinoBuzzer);
	}
}
