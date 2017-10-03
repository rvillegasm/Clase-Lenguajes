#pragma once
#include "prioridad.h"
#include "estado.h"

class Tarea{
  int tiempoActivo;
  int tiempoInactivo;
  int tiempoTerminada;
  Estado estado;
  Prioridad prioridad;

 public:
  Tarea(Prioridad prioridad);
  Prioridad obtPrioridad() const;
  void pulso();
  int obtTiempoActivo() const;
  int obtTiempoInactivo() const;
  int obtTiempoTerminado() const;
  void suspender();
  void terminar();
  void reasumir();
  
};
