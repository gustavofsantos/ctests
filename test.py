import subprocess

def main():
    cont = 1
    res = subprocess.Popen("./mainc", stdout=subprocess.PIPE).stdout.read()
    ultimo_res = res
    try:
        while True:
            res = subprocess.Popen("./mainc", stdout=subprocess.PIPE).stdout.read()
            if res != ultimo_res:
                print('res:  '+ str(res))
                print('cont: '+ str(cont))
                ultimo_res = res
                cont = 0

            cont += 1
    except KeyboardInterrupt:
        print('saindo...')

    print(cont)

if __name__ == '__main__':
    main()