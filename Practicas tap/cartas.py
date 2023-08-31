def main():
    cartas=int(input())
    numeros=[]
    separacion=[]
    for i in range (cartas):
        numeros.append(input())
        separacion.append(numeros[i].split(' '))
        i+=1
    for x in range (len(numeros)):
        y=x+1
        if y>=len(separacion):
            y=len(separacion)

        if all([x<=len(separacion), y<=len(separacion)]):
            if int((separacion[x])[0]) == (int((separacion[y])[0])+1) and (separacion[x])[1] == (separacion[y])[1]:
                print(x,y)
            else:
                print(x,y)
if __name__ == "__main__":
    main()