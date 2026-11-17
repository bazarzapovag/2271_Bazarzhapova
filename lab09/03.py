from string import ascii_lowercase

s = input()

cnt = -1
let = ''

for ch in ascii_lowercase:
    c = s.count(ch)
    if c > cnt:
        cnt = c
        let = ch

print(s.replace(let, ''))
