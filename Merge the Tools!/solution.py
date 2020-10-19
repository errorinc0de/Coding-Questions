from collections import OrderedDict

def merge_the_tools(STR,K):
    len_S = len(STR)
    segment_list = []
    C=0
    while (C < len_S):
        segment_list.append(STR[C:C+K])
        C+=K
    for seg in segment_list:
        print (''.join(OrderedDict.fromkeys(seg)))


