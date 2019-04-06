(n, e) = map(int, input().split()) #base namosan

sas = [(0, 0)] * (n+1)
mohseni = set()

for i in range(e):
    (asghar, mamad) = [int(x) for x in  input().split()]
    sas[asghar] = (sas[asghar][0] + 1, sas[asghar][1] - mamad)
    if sas[asghar] > sas[1]:
        mohseni.add(asghar)
    if asghar == 1:#wrong bekhater to shit
        mohseni = set([i for i in mohseni if sas[i] > sas[1]])
    print(len(mohseni)+1)