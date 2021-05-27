


void regnCV() {


  ////////////////// Cirkulationspumpe///////////////////////////7

  // Starter cirkulationspumpe

if ((T13 > Cvpd) || (T16 > Cvpd) || (T17 > Cvpd) || (T13 = -127.00)) {
    
  { digitalWrite(Cpumpe, HIGH); // Start pumpe
    CpumpeS = 1 ;                // Sæt status for solpumpe
   }

  // Stopper centralvarmepumpe
if ((T10 < Cvps) && (T13 < Cvps) && (T16 > Cvpd))

  
  { digitalWrite(Cpumpe, LOW); // Stop pumpe
    CpumpeS = 0;                   // Sæt status for pumpe
   
  }
}


  ///////////////////////Afslutning//////////////////////////
}
