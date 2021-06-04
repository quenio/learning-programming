for i = 0 to 10 do
  let fahrenheit = 10.0 * (float i)
  let celsius = (fahrenheit - 32.0) * 0.55
  printfn "%3.0fF -> %5.1fC" fahrenheit celsius
