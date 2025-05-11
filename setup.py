from setuptools import setup, Extension

hello_mod = Extension(
    name="hello",
    sources=["hello.c"],
)

setup(
    name="hello_extension",
    version="0.1",
    description="A toy C extension for saying hello",
    ext_modules=[hello_mod],
)
