for fahrenheit in range(0, 110, 10):
    celsius = (fahrenheit - 32) * 0.55
    print(f"{fahrenheit:.1f}f -> {celsius:.1f}c")
