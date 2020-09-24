int buttonState=0;
int counter=1;

void setup(){

	pinMode(A0,INPUT_PULLUP);
	for(int i=2;i<6;i++){
		pinMode(i,OUTPUT);
	}
}
void flash(int led,int duration){
	digitalWrite(led,HIGH);
	delay(duration);
	digitalWrite(led,LOW);
	delay(duration);

}
void loop(){
	
	buttonState=digitalRead(A0);
	
	if(buttonState==LOW){
		switch(counter){
			case 1:
				flash(2,500);
				break;
			case 2:
				flash(3,500);
				break;
			case 3:
				flash(4,500);
				break;
			case 4:
				flash(5,500);
				break;
		}
		counter++;
	}
	}	
		
		
			
	

