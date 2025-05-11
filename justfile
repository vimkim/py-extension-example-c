build:
    uv run setup.py install

run:
    uv run test_hello.py

build-run: build run
