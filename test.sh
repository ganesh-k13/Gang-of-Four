for d in $(find . -maxdepth 1 -type d -not -path '*/\.*' -not -path '.')
do
  make clean -C $d
done

for d in $(find . -maxdepth 1 -type d -not -path '*/\.*' -not -path '.')
do
  make -C $d
done

for d in $(find . -maxdepth 1 -type d -not -path '*/\.*' -not -path '.')
do
  $d'/test'
done
