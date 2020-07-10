id -Gn $FT_USER | sed "s/ /,/g" | tr -d "\t" | tr -d "\n"
