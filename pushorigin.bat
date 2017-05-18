:: 
::
@echo off
set path=K:\Git32\bin;%path%
git status
git add *
git commit -a -m "update"
git push origin
pause
