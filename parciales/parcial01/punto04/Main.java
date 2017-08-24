public class Main {

   private static boolean evaluar(LogicaAbstracta arbol) {
      boolean ret = false;

      if(arbol == null) {
	  ret = false;
      }
      else if(arbol instanceof Verdadero) {
	  Verdadero unVer = (Verdadero) arbol;
	  ret = unVer.obtValor();
      }
      else if(arbol instanceof Falso) {
	  Falso unFal = (Falso) arbol;
	  ret = unFal.obtValor();
      }
      else {
	  Binario unBin = (Binario) arbol;

	  switch (unBin.obtOper()) {
	  case Y:
	      ret = evaluar(unBin.obtIzq()) &&
		  evaluar(unBin.obtDer());
	      break;

	  case C:
	      ret = !evaluar(unBin.obtIzq()) ||
		  evaluar(unBin.obtDer());
	      break;
	  }
      }
      
      return ret;
   }

   public static void main(String args[]) {

      LogicaAbstracta logica[] = {
         new Binario(Operador.Y,
                     new Verdadero(),
                     new Verdadero()),
         new Binario(Operador.C,
                     new Verdadero(),
                     new Falso()),
         new Binario(Operador.Y,
                     new Verdadero(),
                     new Falso()),
         new Binario(Operador.C,
                     new Falso(),
                     new Falso()),
         new Binario(Operador.Y,
                     new Binario(Operador.C,
                                 new Verdadero(),
                                 new Falso()),
                     new Binario(Operador.C,
                                 new Falso(),
                                 new Verdadero()))
      };

      for (LogicaAbstracta la : logica) {
         System.out.println("Valor: " + evaluar(la));
      }
   }
}
