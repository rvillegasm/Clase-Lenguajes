public enum Operador {
   Y('Y'),
   C('C');

   private final char oper;

   Operador(char oper) {
      this.oper = oper;
   }

   public String toString() {
      return "" + oper;
   }
}
