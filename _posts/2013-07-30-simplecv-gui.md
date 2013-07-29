---
layout: post
title:  "SimpleCV Graphical User Interface"
date:   2013-07-30 01:15:30
categories: simplecv python
---

[SimpleCV](http://www.simplecv.org/ "Simple CV") which is one of the easiest image processing library to manipulate/process images either from a camera or files stored locally, written in python programming language currently has a Character User Interface which requires lots of understanding about the programming language itself along with the requirement to remember all the syntax and structures of the SimpleCV.

Having the image processing library in a GUI form will have following advantages:

1. A user without a bare knowledge of SimpleCV can also easily use it.
2. No need to remember the structures and the programming language in which the library was written.
3. Visualize the end results immediately
4. Play around the image until satisfied
5. Fun to use

So having such great potentials in the GUI, i have written a SimpleCV-GUI application in python using wxPython. The features of this application are:

* Select camera attached to your system
* Capture image from the camera and apply features to it
* Select image stored in the hard drive
* Feature selection
* Apply a feature on top of the previous result
* Reset the image to its original form
* Save image (Images are saved in the directory selected during the image selection process

All these just by a click of the mouse. The rendering system of the SimpleCV was one of the major hurdles in the development of this application, the image needs to be saved several times in the hard-disk and needs to be read many times which consumed lots of memory and space, the camera interface also didn't have a much in the API part. SimpleCV-GUI have been developed even though there were many obstacles and there still remains many works to be completed.

Source File: [SimpleCV-GUI](https://github.com/sushilthe/SimpleCV-GUI "SimpleCV-GUI")

Screen-Shots: [SimpleCV GUI under Ubuntu 12.04](https://github.com/sushilthe/SimpleCV-GUI/tree/master/ScreenShots "Screenshots")