# left-pad

> Left pad the given argument with some characters

This is a tiny command line program written in [ReasonML](https://reasonml.github.io/) and compiled natively using `bsb-native`.

### Arguments

- word : the word that needs some left padding
- num : the length of the string, padding fills what isn't taken by the word
- char : optional, pad with this character, otherwise use spaces

### Install

```
$ npm install
```

### Build

```
$ npm run build
```

### Run

```
$ lib/bs/bytecode/left-pad word 7 0
000word
```
