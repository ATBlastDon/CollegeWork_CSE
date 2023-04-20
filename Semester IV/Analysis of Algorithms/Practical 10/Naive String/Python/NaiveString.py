text = \
"bhubhṛdbhubhṛdbhujangaṁ pralayaravavaraṁ prajvalajjvālamālaṁ\n\
kharjarjaṁ kharjadurjaṁ khikhacakhacakhacitkharjadurjarjayantam | \n\
bhūbhāgaṁ bhōgabhāgaṁ gagagagagaganaṁ gardamartyugragaṇḍam \n\
svacchaṁ puccha svagacchaṁ svajanajananutaḥ pātu māṁ nārasiṁhaḥ ||"

pattern = "gaṁ"

for i in range(len(text)):
    if text[i] == pattern[0]:
        flag = True
        for j in range(len(pattern)):
            if pattern[j] != text[i+j]:
                flag = False
        if flag:
            print(f"Pattern '{pattern}' found at index {i}")
    else:
        pass