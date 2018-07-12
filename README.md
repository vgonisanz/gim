# GIM

General input manager.

# Info

* [QCursor](http://doc.qt.io/qt-5/qcursor.html), class to provide a mouse cursor with an arbitrary shape.
* [qxtglobalshortcut](https://github.com/hluk/qxtglobalshortcut), cross-platform library for handling system-wide shortcuts in Qt applications.

# Samples

## Shortcut

Sample to get actions thought keyboard using QT and qxtglobalshortcut as dependencies.

Limitations:
* If a shortcut already exist, cannot parse it.
* Shall register manually all inputs in qt enum mode.
