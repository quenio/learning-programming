# (C) 2021 Quenio. Licensed under CC0 1.0: https://creativecommons.org/publicdomain/zero/1.0

for fahrenheit in range(start=0, srop=110, step=10):
    celsius = (fahrenheit - 32) * 0.55
    print(f"{fahrenheit:3.0f}F -> {celsius:5.1f}C")
