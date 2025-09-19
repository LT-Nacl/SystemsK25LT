#!/usr/bin/bash
mkdir testdir
git clone $cloneurl testdir
cd testdir
if make compile && make run; then
    echo "Command succeeded"
else
    echo "Command failed"
fi
