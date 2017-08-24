public enum {
   Y('y'),
   O('o');

   private final char oper;

   Operator(char oper) {
      this.oper = oper;
   }

   public String toString() {
      return "" + oper;
   }
}
