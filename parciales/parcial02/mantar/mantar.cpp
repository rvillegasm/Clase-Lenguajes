#include "tarea.h"
#include <iostream>
#include <cstdlib>
#include <vector>

enum Accion { Suspender, Terminar, Reasumir };

Prioridad obtPrioridad(std::string& nombrePrioridad);
Accion obtAccion(std::string& nombreAccion);
void hacerPulso(std::vector<Tarea>& tareas);
void mostrarResumen(std::vector<Tarea>& tareas);

int
main(void) {
  std::vector<Tarea> tareas;
  int nTareas;

  std::cin >> nTareas;

  for (int i = 0; i < nTareas; i++) {
    std::string prioridad;
    std::cin >> prioridad;
    Tarea tmp(obtPrioridad(prioridad));
    tareas.push_back(tmp);
  }

  std::string accion;
  int nTarea;

  while (std::cin >> accion >> nTarea) {
    switch(obtAccion(accion)) {
    case Suspender:
      tareas[nTarea].suspender();
      break;
    case Reasumir:
      tareas[nTarea].reasumir();
      break;
    case Terminar:
      tareas[nTarea].terminar();
      break;
    }

    hacerPulso(tareas);
  }

  mostrarResumen(tareas);
  
  return EXIT_SUCCESS;
}

Prioridad obtPrioridad(std::string& nombrePrioridad) {
  if (nombrePrioridad == "ALTA") return ALTA;
  if (nombrePrioridad == "BAJA") return BAJA;
  if (nombrePrioridad == "MEDIA") return MEDIA;
}

Accion obtAccion(std::string& nombreAccion) {
  if (nombreAccion == "suspender") return Suspender;
  if (nombreAccion == "reasumir") return Reasumir;
  if (nombreAccion == "terminar") return Terminar;
}

void hacerPulso(std::vector<Tarea>& tareas) {
  for (std::vector<Tarea>::iterator it = tareas.begin();
       it != tareas.end();
       ++it) it->pulso();
}

void mostrarResumen(std::vector<Tarea>& tareas) {
  
  for (std::vector<Tarea>::iterator it = tareas.begin();
       it != tareas.end();
       ++it) {
    std::cout << "TA: " << it->obtTiempoActivo()
              << " TI: " << it->obtTiempoInactivo()
              << " TT: " << it->obtTiempoTerminado()
              << std::endl;
  }
}
