#!/usr/bin/env python

from distutils.core import setup, Extension

setup(
	name = "cmathlibmod",
	version = "1.0",
	ext_modules = [Extension("cmathlibmod", ["bind.c", "cmathlibmod.c"])]
	);
