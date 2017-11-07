
class Pato
  def graznar
    puts "cuack"
  end
end

class Vaca
  def mujir
    puts "muuuu"
  end
  def graznar
    puts "muu-cuack"
  end
end

def hacerGraznar obj
  obj.graznar
end
