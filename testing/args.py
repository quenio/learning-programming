# (C) 2021 Quenio. Licensed under CC0 1.0:
# https://creativecommons.org/publicdomain/zero/1.0


def parse():
  from argparse import ArgumentParser
  parser = ArgumentParser()
  parser.add_argument(
    "language",
    type=str,
    help="The programming language used to write the examples."
  )
  parser.add_argument(
    "example",
    type=int,
    help="The number of the example to be tested."
  )
  args = parser.parse_args()
  return (args.language, args.example)


