
echo -e "\e[92mclearing.... \e[0m"
for d in $(find . -maxdepth 1 -type d -not -path '*/\.*' -not -path '.')
do
	mkdir $d'/obj/' ||:
	make clean -C $d
done

echo -e "\e[92mbuilding.... \e[0m"
for d in $(find . -maxdepth 1 -type d -not -path '*/\.*' -not -path '.')
do
	make -C $d
done

echo -e "\e[92mexecuting.... \e[0m"
for d in $(find . -maxdepth 1 -type d -not -path '*/\.*' -not -path '.')
do
	$d'/test.out'
done
