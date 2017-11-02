#!/usr/bin/ruby

def medlog(n=0, m=0)
  result = n%m
  answer = "*"
  resp = "*"
  result.times do
    resp = answer + "*"
  end
  return resp
end
