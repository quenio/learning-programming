#!/usr/bin/env python3

# (C) 2021 Quenio. Licensed under CC0 1.0:
# https://creativecommons.org/publicdomain/zero/1.0


from testing import args, file, command


(language, example) = args.parse()
example_no = f"{example:03d}"
program_path = file.find(f"{example_no}-*.{language}")
cases_path = file.find(f"{example_no}-*.yml")

(output, exit) = command.run("cc", [program_path])
if exit == 0:
  (output, exit) = command.run("a.out")
  if exit == 0:
    print(output)

if exit != 0:
  print("No example found.")


