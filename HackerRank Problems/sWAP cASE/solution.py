def swap_case(s):
    t=s.swapcase() #swapcase used for swapping cases of letters i.e from uppercase to lowercase and vice-versa
    return t
if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
