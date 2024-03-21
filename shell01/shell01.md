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

# 02- Find_sh

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

