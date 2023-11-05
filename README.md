# c-plus-plus-tutorial
C++ tutorial for TSI

# Installing Compilers
To run these examples, either install GCC:

Debian
```
sudo apt install gcc
```

Redhat
```
sudo dnf install gcc
```

Arch
```
sudo pacman -S gcc
```

On macOS, the `clang` compiler is installed as part of Xcode:
```
xcode-select --install
```


However, GCC can be installed with Homebrew:
```
brew install gcc
```

# Installing via conda
Conda can also be used to install GCC:

```
conda install -c conda-forge gcc
```


# Running examples with Docker
You can use the [GCC](https://hub.docker.com/_/gcc_) image to compile and run these examples:
```bash
docker pull gcc
```

To set up an interactive container with the current directory:
```bash

docker run -it --rm -v $(pwd):/data -w /data gcc bash
``````