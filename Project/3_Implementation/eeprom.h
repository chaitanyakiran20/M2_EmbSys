void EEPROM_write(unsigned int Address, unsigned char Data)
{

	while(EECR & (1<<EEWE));
	EEAR = Address;
	EEDR = Data;
	EECR |= (1<<EEMWE);
	EECR |= (1<<EEWE);

}

unsigned char EEPROM_read(unsigned int Address)
{

	while(EECR & (1<<EEWE));
	EEAR = Address;
	EECR |= (1<<EERE);
	return EEDR;

}