public class Main {

   private static boolean evaluar(LogicaAbstracta arbol) {
      boolean ret = false;
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
