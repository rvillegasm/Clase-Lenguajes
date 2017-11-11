require 'ast'
require 'scanner'
require 'token'
require 'calcex'

class Parser
  def initialize istream
    @scan = Scanner.new istream
  end

  def parse
    return prog
  end

  def prog
    result = expr
    t = @scan.getToken

    unless t.type == :eof then
      print "Expected EOF. Found ", t.type, ".\n"
      raise ParseError.new
    end

    return result
  end

  def expr
    restExpr term
  end

  def restExpr e
    t = @scan.getToken

    case t.type
    when :add
      return restExpr(AddNode.new(e,term))
    when :sub
      return restExpr(SubNode.new(e,term))
    else
      @scan.putBackToken
    end
    
    return e
  end
  
  def term
    restTerm storable
  end

  def restTerm e
    t = @scan.getToken

    case t.type
    when :times
      return restTerm(TimesNode.new(e,storable))
    when :divide
      return restTerm(DivideNode.new(e,storable))
    else
      @scan.putBackToken
    end
    
    return e
  end

  def storable
    result = factor
    t = @scan.getToken
    case t.type
    when :keyword
      unless t.lex == "S"
        print "Expected S found", t.lex
        raise ParseError.new
      end
    else
      @scan.putBackToken
    end
    
    return result
  end

  def factor
    t = @scan.getToken
    case t.type
    when :number
      return NumNode.new(t.lex.to_i)
    when :keyword
      unless t.lex == "R"
        print "Expected R found", t.lex
        raise ParseError.new
      end
      return RecallNode.new
    when :lparen
      result = expr
      t = @scan.getToken
      unless t.type == :rparen
        print "Expected )"
        raise ParseError.new
      end
      return result
    else
      print "Epected number, r, ("
      raise ParseError.new
    end
  end
  
  private :prog, :expr, :restExpr, :term, :restTerm, :storable, :factor
end
