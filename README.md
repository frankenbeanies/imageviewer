ImageViewer
===========

[![release](http://github-release-version.herokuapp.com/github/frankenbeanies/imageviewer/release.svg?style=flat)]

A simple application for viewing images through OpenCV

Platforms
---------

Tested on Ubuntu 16.04 LTS

License
-------

[MIT](LICENSE)

Distribution
------------

ImageViewer can be built from source. Binaries can also be downloaded from the releases page. 

Building from Source
--------------------

Building from source can be done in a few easy steps

1) Download the project

```
git clone https://github.com/frankenbeanies/imageviewer.git
cd imageviewer
```

2) Use cmake to generate Makefile

```
cmake .
```

3) Buld the project

```
make
```

Tests will be located at Tests/Tests

The Application will be located at App/ImageViewer

Running Tests
-------------

After building the project, you can run the tests via

```
./Tests/Tests
```

Usage
-----

After bulding the project, ImageViewer will be located in the App directory.

Usage is as follows: 

```
./ImageViewer <path_to_image>
```

You can move the ImageViewer binary to whatever location you wish.