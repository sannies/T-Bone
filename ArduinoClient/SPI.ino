unsigned char status;


void write43x(unsigned char tmc43x_register, unsigned long datagram) {
  read43x(tmc43x_register | 0x80,datagram);
}

void read43x(unsigned char tmc43x_register, unsigned long datagram) {
  unsigned long i_datagram;

  //select the TMC driver
  digitalWrite(cs_squirrel,LOW);


#ifdef DEBUG
  Serial.print("Sending ");
  Serial.println(datagram,HEX);
#endif

  //the first value is irgnored
  status = SPI.transfer(tmc43x_register);
  //write/read the values
  i_datagram = SPI.transfer((datagram >> 24) & 0xff);
  i_datagram <<= 8;
  i_datagram = SPI.transfer((datagram >> 16) & 0xff);
  i_datagram <<= 8;
  i_datagram |= SPI.transfer((datagram >>  8) & 0xff);
  i_datagram <<= 8;
  i_datagram |= SPI.transfer((datagram) & 0xff);

#ifdef DEBUG
  Serial.print("Status :");
  Serial.println(status,BIN);
  Serial.print("Received ");
  Serial.println(i_datagram,HEX);
#endif
  //deselect the TMC chip
  digitalWrite(cs_squirrel,HIGH); 
}

void set260Register(unsigned long value) {
  //santitize to 20 bits 
  value &= 0xFFFFF;
  write43x(COVER_LOW_REGISTER,value);  //Cover-Register: Einstellung des SMARTEN=aus

  read43x(STATUS_REGISTER,0x0); //Abfrage Status, um SPI-Transfer zu beenden
  read43x(STATUS_REGISTER,0x0); //Abfrage Status, um SPI-Transfer zu beenden
  read43x(STATUS_REGISTER,0x0); //Abfrage Status, um SPI-Transfer zu beenden
}



