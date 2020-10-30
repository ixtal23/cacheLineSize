#!/bin/bash
#
# Copyright © 2020 Maxim Morozov. All rights reserved.
#
# Created by Maxim Morozov on 30/10/2020.
#
# cpu-cache-line-size
#
# run.sh
#

APPLICATION_HOME="$(pwd)"
APPLICATION_BIN="${APPLICATION_HOME}/bin"
APPLICATION_EXE="${APPLICATION_BIN}/cpu-cache-line-size"

"${APPLICATION_EXE}"
