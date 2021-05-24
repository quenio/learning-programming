# (C) 2021 Quenio. Licensed under CC0 1.0:
# https://creativecommons.org/publicdomain/zero/1.0


def run(program, args=None):
  from subprocess import run
  command = run(
    [program, *(args or [])],
    encoding='UTF-8',
    capture_output=True
  )
  return (command.stdout, command.returncode)


