#include "estado.h"
#include "prioridad.h"
#include "tarea.h"

Tarea::Tarea(Prioridad prioridad){
  this -> prioridad = prioridad;
  this -> estado = ACTIVO;
  this -> tiempoActivo = 0;
  this -> tiempoInactivo = 0;
  this -> tiempoTerminada = 0;
}

Prioridad Tarea::obtPrioridad() const{
  return this -> prioridad;
}

int Tarea::obtTiempoActivo() const{
  return this -> tiempoActivo;
}

int Tarea::obtTiempoInactivo() const{
  return this -> tiempoInactivo;
}

int Tarea::obtTiempoTerminado() const{
  return this -> tiempoTerminada;
}

void Tarea::pulso(){
  if(estado==INACTIVO){
    this -> tiempoInactivo += 1;
  }
  else if(estado==ACTIVO){
    this -> tiempoActivo += 1;
  }
  else if(estado==TERMINADO){
    this -> tiempoTerminada += 1;
  }
  
}

void Tarea::suspender(){
  this -> estado = INACTIVO;
}

void Tarea::terminar(){
  this -> estado = TERMINADO;
}

void Tarea::reasumir(){
  this -> estado = ACTIVO;
}
