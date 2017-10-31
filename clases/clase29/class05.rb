class Contador
  attr_accessor :valor
  def initialize(valor=0)
    @valor = valor
  end
  def incrementar
    @valor += 1
  end
end 
