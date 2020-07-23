#!/bin/sh
ifconfig | grep ether | rev | cut -d "r" -f 1 | tr -d "[:blank:]" | rev
