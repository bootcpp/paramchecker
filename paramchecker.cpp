bool bpmAreOk(float bpm) {
  if(bpm < 70 || bpm > 150) {
    return false;
  }
 return true;
}

bool spoAreOk(float spo2){
  if(spo2 < 80) {
    return false;
  } 
 return true;
}

bool respRateOk(float respRate){
  if(respRate < 30 || respRate > 60) {
    return false;
  }
  return true;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  
  bool bpm_flag = bpmAreOk(bpm);
  bool spo2_flag =  spoAreok(spo2);
  bool respRate_flag = respRateOk(respRate);
  
  return(bpm_flag && spo2_flag && respRate_flag);
}
