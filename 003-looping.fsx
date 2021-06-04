// (C) 2021 Quenio. Licensed under CC0 1.0: https://creativecommons.org/publicdomain/zero/1.0

for i = 0 to 10 do
  let fahrenheit = 10.0 * (float i)
  let celsius = (fahrenheit - 32.0) * 0.55
  printfn "%3.0fF -> %5.1fC" fahrenheit celsius

