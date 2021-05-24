# (C) 2021 Quenio. Licensed under CC0 1.0:
# https://creativecommons.org/publicdomain/zero/1.0


def find(pattern):
  from pathlib import Path
  for file in Path(".").glob(pattern):
    return f"./{file}"
  return ""


