# 01- Print_groups.sh

```
mkdir ex01
cd ex01

vi print_groups.sh

        // add this text in the file

#!/bin/bash
id -Gn $FT_USER | tr ' ' ',' | tr -d "\n"

        // OR from Bing

#!/bin/sh
groups $FT_USER | tr ' ' ','

:wq   // save exit

    // you should give permission to work

chmod +x print_groups.sh

        // if you want run to see the results

./print_groups.sh

```

[Video start 19:42 ](https://youtu.be/NSDmvhIF_Sc?si=vTti3VzOhsoef2ec&t=1182)

[Bing](https://sl.bing.net/evFBvMocjiC)

# 02- Find_sh.sh

```
mkdir ex02
cd ex02

vi find_sh.sh

        // you should add this comment

#!/bin/sh
find . -type f -name "*.sh" -exec basename {} .sh \;

        // save exit

        // give permission to work, you can see the change with " ls -l " comment

chmod +x find_sh.sh

        // check it work and you will see all the file end with ".sh"

./find_sh.sh

```

[Bing](https://sl.bing.net/h8sDqdNRLno)

# 03- count_files.sh

```
    // count the dirctory and files for current location
mkdir ex03
cd ex03

vi count_files.sh

    // add this comment in vim

#!/bin/sh
find . -type f -o -type d | wc -l

    // save and exit
    // give the permission to file

chmod +x count_files.sh

    // you can check and run by this comment

./count_files.sh

```

[Bing](https://sl.bing.net/h061RVgSg8a)

# 4- MAC.sh

```
mkdir ex04
cd ex04
vi MAC.sh

        // add this comment in vim
#!/bin/sh
ifconfig -a | grep ether | awk '{print $2}'

    // save and exit

    // make the script executable
chmod +x MAC.sh

    // Test
bash MAC.sh or ./MAC.sh


```

[Bing with out executable](https://sl.bing.net/cDyPAkWO8kK)

[Bing Full](https://sl.bing.net/kPHoqHbVBm0)

# 5- Can you create it?

```
mkdir ex05
cd ex05

    // make file and write inside of it 42

echo -n 42 > \"\\\?\$\*\'MaRViN\'\*\$\?\\\"
ls -l

 // finish
    // couldn't change the permission from
    // -rw-r--r--  To   -rw---xr--

    // we tried:  chmod u=rw,g=,o=rx filename
    // we tried:  chmod 612 filename

    // and none of them works at all

```

# 6- Skip.sh

```
mkdir ex06
cd ex06

vi skip.sh

    // add this comment

#!/bin/bash
ls -l | awk 'NR % 2 == 1'

    // save, exit
    // make the file executable

chmod +x skip.sh

        // check and run
./skip.sh

ls -l
```

[Bing](https://sl.bing.net/bCXHjtppl1M)

# 7- r_dwssap.sh

```
mkdir ex07
cd ex07

vi r_dwssap.sh

        // add this comment

#!/bin/bash
cat /etc/passwd |
grep -v "#" |                     # Non-comment lines
sed -n 'n;p' | cut -d ':' -f1 |   # Remove info after login name; print lines 2,4,6,8,...
rev |                             # Reverse each name
sort -r |                         # Sort in reverse dictionary order
sed -n "$FT_LINE1,$FT_LINE2 p" |  # Select lines in the range $FT_LINE1 to $FT_LINE2 inclusive
sed "s/$/, /" |
tr -d "\n" |                      # Convert newlines to commas
sed "s/, $/./g" |                 # Convert final comma to dot
tr -d "\n"

        // save and exit
        // change the mode

chmod +x r_dwssap.sh

ls -l

        // for check

./r_dwssap.sh


```

[Usa](https://github.com/48d31kh413k/1337-Piscine-42/blob/main/Shell01/ex07/r_dwssap.sh)  
[Bing](https://sl.bing.net/jwH8HJaDcei)

---

[Gherghiz](https://github.com/baigalmaa-baatar/42-piscine/blob/main/projects/modules/shell01/ex07/r_dwssap.sh)

# 8- add_chelou.sh

```
mkdir ex08
cd ex08
vi add_chelou.sh

        // add this comment

#!/bin/bash
echo $FT_NBR1 + $FT_NBR2 | tr "\'\\\\\"\?\!" "01234" | tr "mrdoc" "01234" | xargs echo "ibase=5; obase=23;" | bc | tr "0123456789ABC" "gtaio luSnemf"


        // save and exit
        // change permission
chmod +x add_chelou.sh

        // check with
bash add_chelou.sh

```

[Bing](https://sl.bing.net/jze5h9Sl0HQ)
