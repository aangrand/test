export FT_LINE1=13
export FT_LINE2=23
cat /etc/passwd | grep -v "#"  | awk 'NR%2==1' | cut -f1 -d":" | rev | sort -r | awk -v l1="$FT_LINE1" -v l2="$FT_LINE2" 'NR>=l1 && NR<=l2' | tr '\n' ',' | sed 's/, */, /g'