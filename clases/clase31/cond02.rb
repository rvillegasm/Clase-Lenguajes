#!/usr/bin/ruby
# fichero: cond02.rb
#
# proposito: mostrar otros tipos de condiciones
#

def cond02 v 
  unless v == 10
    return "v: #{v} es diferente de 10"
  else
    return "v: #{v} es 10"
  end
end

