#pragma once
#include "estado.h"
#include "prioridad.h"

class Tarea{
  int tiempoActivo;
  int tiempoInactivo;
  int tiempoTerminada;
  Estado estado;
  Prioridad prioridad;

 public:
  Tarea(Prioridad prioridad, Estado estado);
  Prioridad obtPrioridad() const;
  void pulso();
  int obtTiempoActiva() const;
  int obtTiempoInactiva() const;
  int obtTiempoTerminada() const;
  void suspender();
  void terminar();
  void reasumir();
  
};
