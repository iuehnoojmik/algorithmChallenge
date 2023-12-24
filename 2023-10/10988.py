word = input();


if len(word)%2 == 0:
    for i in range(len(word)//2):
        if word[i] == word[len(word)-i-1]:
            pass;
        else:
            print(0);
            exit(0);
else:
    for i in range(len(word)//2):
        if word[i] == word[len(word)-i-1]:
            pass;
        else:
            print(0);
            exit(0);
        
print(1);

# reverse 함수가 있음
