ln -s $(pwd)/qmk_firmware/keyboards/keyball ../__qmk__/keyboards/keyball
qmk compile -j 1 -kb $KEYBOARD -km $KEYMAP
mkdir -p tmp
cp ../__qmk__/*.hex tmp/