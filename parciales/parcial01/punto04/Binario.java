public class Binario extends LogicaAbstracta {

   private LogicaAbstracta izq;
   private LogicaAbstracta der;
   private Operador oper;

   public Binario(Operador oper, LogicaAbstracta izq, LogicaAbstracta der) {

      this.oper = oper;
      this.izq = izq;
      this.der = der;
   }

   public LogicaAbstracta obtIzq() {

      return this.izq;
   }

   public LogicaAbstracta obtDer() {

      return this.der;
   }

   public Operador obtOper() {

      return this.oper;
   }
}
