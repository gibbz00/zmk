## Building Borne-keyboard ZMK firmware
```
# in app/
west build -d build/left --pristine --board borne -- -DSHIELD=borne_left
west build -d build/right --pristine --board borne -- -DSHIELD=borne_right
```
