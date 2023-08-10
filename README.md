# ddd

A collection of randomness and decision-making utilities.

## Usage

Running `ddd` in your terminal will yield:

```console
$ ddd
usage: ddd <subcommand>
where <subcommand> can be:
  yn - yes or no
  choose - one of multiple options
  giberrish - randomly generated word
```

## The Subcommands

### Y/N

Simply generates a "Yes" or "No" output. You may provide two additional
arguments to change these outputs.

```console
# both results are shown for demonstration. the actual results will be random.
$ ddd yn
Yes
$ ddd yn
No
$ ddd yn Videogames Sleep
Videogames
$ ddd yn Videogames Sleep
Sleep
```

### Choose

Randomly decide between at least 3 provided options.

```console
$ ddd choose A B C D
C
$ ddd choose A B C D
B
$ ddd choose A B C D
B
$ ddd choose A B C D
D
```

### Giberrish

Sometimes you need a little giberrish as inspiration. By default, 5 characters
are generated. You may provide your own amount if you wish.

```console
$ ddd giberrish
yxmak
$ ddd giberrish 3
xbp
```

## Install

Currently, only Windows builds are provided on the [releases][releases] page.

You should add the executable to your PATH.

## Build

Use the [bip][bip] build system:

On Windows:

```batch
py -3.11 -m bip build
```

On Linux:

```sh
py3.11 -m bip build
```

To build a distribution-ready package use the correct `pkg` script.

On Windows:

```batch
.\pkg.bat "1.0.0"
```

On Linux:

```sh
./pkg.sh "1.0.0"
```

[releases]: https://github.com/qeaml/ddd/releases
[bip]: https://github.com/qeaml/bip
