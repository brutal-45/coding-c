# ============================================================
#  coding-c — build system
#  Compiles every .c program in the unit folders into bin/
#
#    make            -> build + smoke test
#    make build      -> compile all programs
#    make test       -> compile (if needed) + smoke-run all
#    make list       -> list every program
#    make clean      -> delete bin/
# ============================================================

CC      := gcc
CFLAGS  := -Wall -Wextra -std=c99
SRC     := $(shell find unit-1-basics unit-2-operators unit-3-control-flow -name '*.c' 2>/dev/null | sort)
BIN_DIR := bin
BINS    := $(patsubst %.c,$(BIN_DIR)/%,$(SRC))

.PHONY: all build test list clean help

all: build test

build: $(BINS)
	@echo ""
	@echo "Compiled $(words $(BINS)) programs into $(BIN_DIR)/"

$(BIN_DIR)/%: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@

test: build
	@bash scripts/smoke-test.sh

list:
	@echo "Programs in this repo:"
	@for f in $(SRC); do echo "  $$f"; done

clean:
	rm -rf $(BIN_DIR)
	@echo "bin/ removed"

help:
	@echo "Targets: all (default) | build | test | list | clean"
