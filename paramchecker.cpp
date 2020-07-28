bool vitalIsOk(float min, float max, float value){
  return !(val < min || val > max) ;  
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  
  bool bpm_flag = vitalIsOk(70,150,bpm);
  bool spo2_flag =  vitalIsOk(80,100,spo2);
  bool respRate_flag = VitalIsOk(30,60,respRate);
  
  return(bpm_flag && spo2_flag && respRate_flag);
}
