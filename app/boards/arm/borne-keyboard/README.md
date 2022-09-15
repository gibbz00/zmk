## Building Borne-keyboard ZMK firmware
```
# in app/
west build -d build/[left, right] --pristine --board borne -- -DSHIELD=borne_[left, right]
```
