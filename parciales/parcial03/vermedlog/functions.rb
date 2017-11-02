#!/usr/bin/ruby

def ok?(n,m,s)
  result = n%m
  ans = result + 1
  if(s.length == ans)
    return true
  else
    return false
  end
end
