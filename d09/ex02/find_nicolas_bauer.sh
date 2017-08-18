cat phonebook.txt | grep -i "Nicolas\tBomber" | awk -F'\t' '{print $3}' | awk -F'[^0-9]*' '$1'
