
MCAL:
-> Dio
-> Port
-> General Interrupt
-> External Interrupt
-> ADC

HAL:
-> LCD
-> Keypad
-> 7Seg Display
-> DC Motor
-> LM35
-> LDR
-> LEDs
-> Buzzer

- the project starts with a login screen, the user has 3 attempts to enter the correct password(correct password == reversed ID).
- with each failed trial a beep sound is issued and the SSD is decremented.
- after three failed attempts the user is blocked and the system shutdown.
- If login is successful, the user is directed to the dashboard screen, where there are temperature and light intensity indicators.
- when the temperature is above a set 35C the fan is on & vice versa.
