#!/bin/bash
echo "Linux Version"
uname -a
echo "Kernel Version"
uname -r

cat /proc/version
echo "shells"
cat /etc/shells
echo "Mouse settings"
xset q
xinput list
echo "CPU info"
cat /proc/cpuinfo
echo "Memory info"
cat /proc/meminfo
echo "Hard disk information"

cat /proc/partitions
echo "File system(Mount)"
cat /proc/mounts

