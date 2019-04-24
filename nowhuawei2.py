# =============================================================================
# filename=[]
# linenum=[]
# errornum=[]
# 
# import sys 
# for x in sys.stdin:
#     x=x.split()
#     tempfile=x[0]
#     #print(tempfile)
#     templine=x[1]
#     exist=False
#     for j in range(len(tempfile)-1,-1,-1):
#         if tempfile[j]=='\\':
#             tempfile=tempfile[j+1:]
#     for j in range(len(filename)):
#         if filename[j]==tempfile and linenum[j]==templine:
#             exist=True
#             errornum[j]+=1
#     if not exist:
#         filename.append(tempfile)
#         linenum.append(templine)
#         errornum.append(1)
# 
# # =============================================================================
# # try:
# #     while True:
# #         x = sys.stdin.readline().strip()
# #         if x == '':
# #             break
# #         x = x.split()
# #         #print int(lines[0]) + int(lines[1])
# #         list.append([int(lines[0]),int(lines[1])])
# # except:
# #     pass
# # =============================================================================
# 
# index=[i for i,v in sorted(enumerate(errornum), key=lambda x:x[1])]
# filename=filename[index]
# linenum=linenum[index]
# errornum=errornum[index]
# 
# for i in range(min(len(filename),8)):
#     if len(filename[i])>16:
#         filename[i]=filename[i][len(filename)-16:len(filename)]
#     print(filename[i],linenum[i],errornum[i], end=' ')
# =============================================================================

filename=[]
linenum=[]
errornum=[]
while True:
    try:
        x=input().split()
        if len(x)==0:
            break
        if len(x)<2:
            continue
        tempfile=x[0]
        templine=x[1]
        exist=False
        for j in range(len(tempfile)-1,-1,-1):
            if tempfile[j]=='\\':
                tempfile=tempfile[j+1:]
        for j in range(len(filename)):
            if filename[j]==tempfile and linenum[j]==templine:
                exist=True
                errornum[j]+=1
        if not exist:
            filename.append(tempfile)
            linenum.append(templine)
            errornum.append(1)
    except:
        break
#print(filename)
errornum=[-errornum[i] for i in range(len(errornum))]
index=[i for i,v in sorted(enumerate(errornum), key=lambda x:x[1])]
errornum=[-errornum[i] for i in range(len(errornum))]
for i1 in range(min(len(filename),8)):
    i=index[i1]
    if len(filename[i])>16:
        filename[i]=filename[i][len(filename[i])-16:len(filename[i])]
    print(filename[i],linenum[i],errornum[i])


# =============================================================================
# import collections
# error_dict = collections.OrderedDict()
# while True:
#     try:
#         filename_row = input().split()
#         filename = filename_row[0][filename_row[0].rfind('\\')+1:]
#         row = filename_row[1]
#         if (filename, row) in error_dict:
#             error_dict[(filename, row)] += 1
#         else:
#             error_dict[(filename, row)] = 1
#     except:
#         break
# error_dict = error_dict.items()
# sort_dict = sorted(error_dict, key=lambda x: x[1], reverse=True)
# error_count = 0
# for each in sort_dict:
#     error_count += 1
#     if error_count <= 8:
#         name = each[0][0]
#         if len(name)>16:
#             name = name[-16:]
#         row = each[0][1]
#         count = each[1]
#         print(' '.join([name, str(row), str(count)]))
#     else:
#         break
# =============================================================================
