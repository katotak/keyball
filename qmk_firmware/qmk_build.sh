ln -s $(pwd)/keyboards/keyball ../__qmk__/keyboards/
qmk compile -j 1 -kb ${kb} -km ${km}
mkdir -p .build
cp ../__qmk__/*.hex .build/