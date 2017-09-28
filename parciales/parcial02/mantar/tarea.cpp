#include "estado.h"
#inlcude "prioridad.h"
#include "tarea.h"

Tarea::Tarea(Prioridad prioridad,Estado estado){
  this -> prioridad = prioridad;
  this -> estado = estado;
}

Tarea::obtPrioridad(){
  return prioridad;
}

Tarea::obtTiempoActiva(){
  return tiempoActivo;
}

Tarea::obtTiempoInactiva(){
  return tiempoInactivo;
}

Tarea::obtTiempoTerminada(){
  return tiempoTerminada;
}

Tarea::pulso(){
  if(estado==INACTIVO){
    tiempoInactivo += 1;
  }
  
}

Tarea::suspender(){
  this -> estado = INACTIVO;
}

Tarea::terminar(){
  this -> estado = TERMINADO;
}

tarea::reasumir(){
  this -> estado = ACTIVO;
}
