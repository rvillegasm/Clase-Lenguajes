#!/usr/bin/ruby

def medlog(n=0, m=0)
  result = n%m
  resp = "*"
  result.times do
    resp += "*" 
  end
  return resp
end
