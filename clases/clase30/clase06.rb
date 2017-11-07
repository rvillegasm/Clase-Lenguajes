
class Contador
  attr_accessor :valor
  def initialize valor
    @valor = valor
  end
  def siguiente
    @valor += 1
  end
end

class Contador2 < Contador
  attr_accessor :valor2
  def initialize valor, valor2
    super(valor)
    @valor2 = valor2
  end
  def siguiente
    @valor2 += (1 + @valor)
  end
end
